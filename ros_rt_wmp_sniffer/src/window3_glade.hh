// generated 2012/12/15 17:58:03 CET by danilo@dm1.(none)
// using glademm V2.6.0
//
// DO NOT EDIT THIS FILE ! It was created using
// glade-- wmpSniffer-new.glade
// for gtk 2.24.10 and gtkmm 2.24.2
//
// Please modify the corresponding derived classes in ./src/window3.hh and./src/window3.cc

#ifndef _WINDOW3_GLADE_HH
#  define _WINDOW3_GLADE_HH


#if !defined(GLADEMM_DATA)
#define GLADEMM_DATA 
#include <gtkmm/accelgroup.h>

class GlademmData
{  
        
        Glib::RefPtr<Gtk::AccelGroup> accgrp;
public:
        
        GlademmData(Glib::RefPtr<Gtk::AccelGroup> ag) : accgrp(ag)
        {  
        }
        
        Glib::RefPtr<Gtk::AccelGroup>  getAccelGroup()
        {  return accgrp;
        }
};
#endif //GLADEMM_DATA

#include <gtkmm/window.h>
#include <gtkmm/alignment.h>
#include <gtkmm/label.h>
#include <gtkmm/frame.h>
#include <gtkmm/notebook.h>

class window3_glade : public Gtk::Window
{  
        
        GlademmData *gmm_data;
public:
        class Gtk::Window * window3;
        class Gtk::Alignment * align;
        class Gtk::Label * label;
        class Gtk::Frame * frame15;
        class Gtk::Label * nblabel;
        class Gtk::Notebook * notebook1;
protected:
        
        window3_glade();
        
        ~window3_glade();
};
#endif
