/*------------------------------------------------------------------------
 *---------------------           RT-WMP              --------------------
 *------------------------------------------------------------------------
 *                                                         V7.0B  11/05/10
 *
 *
 *  File: ./src/core/rssi_average.c
 *  Authors: Danilo Tardioli
 *  ----------------------------------------------------------------------
 *  Copyright (C) 2000-2010, Universidad de Zaragoza, SPAIN
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

#include "include/rssi_average.h"

MobileAverage ** rssi;

void initMobileAverage(int RSSI_AVERAGE_ELEMENTS){
	int i;
	rssi=(MobileAverage**) MALLOC(status.N_NODES*sizeof(MobileAverage*));
	for (i=0;i<status.N_NODES;i++){
		rssi[i]=(MobileAverage *) MALLOC(sizeof(MobileAverage));
		mobile_avg_init(rssi[i],RSSI_AVERAGE_ELEMENTS);
	}
}

void freeMobileAverage(){
	int i;
	for (i=0;i<status.N_NODES;i++){
		mobile_avg_free(rssi[i]);
		FREE(rssi[i]);
	}
	FREE(rssi);
}

void rssi_new_frame(unsigned char id, char val){
	mobile_avg_new_value(rssi[id],val);
}

void rssi_reset(unsigned char id){
	if (id >= 0 && id < status.N_NODES){
		mobile_avg_reset(rssi[id]);
	}
}

char rssi_get_averaged_rssi(unsigned char id){
	return mobile_avg_get_averaged_value(rssi[id]);
}
unsigned long rssi_get_age(unsigned char id){
	return mobile_avg_get_age(rssi[id]);
}





