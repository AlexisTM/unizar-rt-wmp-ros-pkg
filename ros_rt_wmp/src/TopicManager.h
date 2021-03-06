/*------------------------------------------------------------------------
 *---------------------           ros_rt_wmp              --------------------
 *------------------------------------------------------------------------
 *                                                         V0.1B  15/09/11
 *
 *
 *  File: ./src/TopicManager.h
 *  Authors: Danilo Tardioli
 *  ----------------------------------------------------------------------
 *  Copyright (C) 2000-2011, Universidad de Zaragoza, SPAIN
 *
 *  Contact Addresses: Danilo Tardioli                   dantard@unizar.es
 *
 *  RT-WMP is free software; you can  redistribute it and/or  modify it
 *  under the terms of the GNU General Public License  as published by the
 *  Free Software Foundation;  either  version 2, or (at  your option) any
 *  later version.
 *
 *  RT-WMP  is distributed  in the  hope  that  it will be   useful, but
 *  WITHOUT  ANY  WARRANTY;     without  even the   implied   warranty  of
 *  MERCHANTABILITY  or  FITNESS FOR A  PARTICULAR PURPOSE.    See the GNU
 *  General Public License for more details.
 *
 *  You should have received  a  copy of  the  GNU General Public  License
 *  distributed with RT-WMP;  see file COPYING.   If not,  write to the
 *  Free Software  Foundation,  59 Temple Place  -  Suite 330,  Boston, MA
 *  02111-1307, USA.
 *
 *  As a  special exception, if you  link this  unit  with other  files to
 *  produce an   executable,   this unit  does  not  by  itself cause  the
 *  resulting executable to be covered by the  GNU General Public License.
 *  This exception does  not however invalidate  any other reasons why the
 *  executable file might be covered by the GNU Public License.
 *
 *----------------------------------------------------------------------*/

#ifndef TOPICMANAGER_H_
#define TOPICMANAGER_H_

#pragma GCC diagnostic ignored "-Warray-bounds"

#include "Manager.h"
	#include <zlib.h>

template<class T> class TopicManager: public Manager {
protected:
	std::map<std::string, info_t> flows_map;
	ros::Subscriber sub;
	int counter;

public:

	TopicManager(ros::NodeHandle * n, int port, std::string name,
			std::string source, std::string destination, unsigned char priority, bool broadcast) :
		Manager(n, port, name, priority) {
		amIstatic = true;
		setBroadcast(broadcast);
		setSource(source);
		setDestination(destination);
		init();
	}

	TopicManager(ros::NodeHandle * n, int port, std::string name, std::string source, unsigned char priority, bool broadcast) :
		Manager(n, port, name, priority) {
		amIstatic = false;
		setBroadcast(broadcast);
		setSource(source);
		init();
	}

	virtual void startRX(){
		ROSWMP_DEBUG(stderr,"am I dest? %d", amIdst);
		if (amIdst) {
			ROSWMP_DEBUG(stderr,"Queue subscribed (%s) port : %d", name.c_str(), port);
			boost::thread(boost::bind(&Manager::run, this));
		}
	}

	virtual bool isHost() {
		return amIsrc;
	}


	void init() {

		if (amIsrc) {
			std::ostringstream s;
			s << n->getNamespace() << "/tx/" << name;
			sub = n->subscribe(s.str(), 1, &TopicManager::callback, this);
			ROSWMP_DEBUG(stderr,"Callback subscribed (%s)\n", s.str().c_str());

			if (! amIstatic){
				init_param();
			}

			std::ostringstream s1;
			s1 << n->getNamespace() << "/" << name << "/decimation";
			decimation = s1.str();
			n->setParam(decimation, 1);
		}
		counter = 1;
	}

	bool shouldDecimate(){
		int val;
		n->getParamCached(decimation, val);
		if (val < 1){
			n->setParam(decimation, 1);
			val = 1;
		}
		if (counter == val){
			counter = 1;
			return false;
		}else{
			counter ++ ;
			return true;
		}
	}

	virtual void fillDestination(const boost::shared_ptr<T const> & message) {
		std::string value;
		n->getParamCached(param_dest, value);
		ROSWMP_DEBUG(stderr,"Get param cached: %s\n",value.c_str());
		setDestination(value);
	}

	virtual int getPriority(const boost::shared_ptr<T const> & message) {
		return flow_prio;
	}

	virtual int getSubPort(T & pm) {
		return 0;
	}
	virtual std::string getSubTopic(T & pm) {
		return "x";
	}
	virtual void callback(const boost::shared_ptr<T const> & message) {
		if (!justone && (stopped || shouldDecimate())) {
			return;
		}
		justone = false;
		if (!amIstatic){
			fillDestination(message);
		}

		if (dests.size()>0) {
			int priority = getPriority(message);
			int n = serialize<T>((char*)(sbuff + sizeof(flow_t)), message);
			ROSWMP_DEBUG(stderr,"Serializing size %d\n",n);
			int bc_dest = computeBroadcastDest();
			ROSWMP_DEBUG(stderr, "Push BC Message, size %d dest %d name %s\n", n + sizeof(flow_t),bc_dest,name.c_str());


//			int size = n;
//			char * p = sbuff + sizeof(flow_t);
//			Bytef * zd = (Bytef *) malloc(500000);
//			uLongf zlen = 500000;
//			int err = compress(zd, &zlen, (const Bytef*) p, (uLong) size);
//			if (err != Z_OK) {
//				fprintf(stderr,"UNABLE to compress, sending uncompressed");
//			} else {
//				//memcpy(p, (char*) zd, zlen);
//				size = zlen;
//				//data_pointer = (char*) zd;
//			}
//			fprintf(stderr, "Post compress :%d\n", size);




			wmpPushData(port, sbuff, n + sizeof(flow_t), bc_dest, priority);
		}
	}
	virtual bool popMessage(T & pm, unsigned int & size, unsigned char & src1, signed char & pri ){
		char * p;
		int idx = wmpPopData(port, &p, &size, &src1, &pri);
		size = size - sizeof(flow_t);
		if (!deserialize<T> (p + sizeof(flow_t), size, pm)) {
			ROS_ERROR("Deserialize error\n");
			wmpPopDataDone(idx);
			return false;
		}
		wmpPopDataDone(idx);
		return true;
	}

	virtual void run() {
		T pm;
		while (ros::ok()) {

			signed char pri;
			unsigned int size;
			unsigned char src1;

			if (!popMessage(pm, size, src1, pri)) {
				continue;
			}

			int subPort = getSubPort(pm);
			std::string subTopic = getSubTopic(pm);

			ROSWMP_DEBUG(stderr, "Received %s on Manager src %d \n", name.c_str(),src1);

			std::ostringstream hash;
			hash << n->getNamespace() << "/rx/R" << (int) src1 << "/" << name; //XXX: << "/compressed";

			if (subTopic.compare("x") != 0) {
				hash << "/" << subTopic;
			}
			if (subPort > 0) {
				hash << "/" << subPort;
			}

			ROSWMP_DEBUG(stderr, "Received %s on Manager\n", hash.str().c_str());


			if (flows_map.find(hash.str()) == flows_map.end()) {
				flows_map[hash.str()].publisher = n->advertise<T> (hash.str(),1);
			}

			flows_map[hash.str()].publisher.publish(pm);
			ROSWMP_DEBUG(stderr, "Published (port:%d)\n!", port);
		}
	}
};

#endif /* TOPICMANAGER_H_ */
