// generated 2012/12/15 17:58:03 CET by danilo@dm1.(none)
// using glademm V2.6.0
//
// DO NOT EDIT THIS FILE ! It was created using
// glade-- wmpSniffer-new.glade
// for gtk 2.24.10 and gtkmm 2.24.2
//
// Please modify the corresponding derived classes in ./src/window2.hh and./src/window2.cc

#ifndef _WINDOW2_GLADE_HH
#  define _WINDOW2_GLADE_HH


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
#include <gtkmm/treeview.h>
#include <gtkmm/scrolledwindow.h>
#include <gtkmm/label.h>
#include <gtkmm/spinbutton.h>
#include <gtkmm/box.h>
#include <gtkmm/alignment.h>
#include <gtkmm/image.h>
#include <gtkmm/button.h>

class window2_glade : public Gtk::Window
{  
        
        GlademmData *gmm_data;
public:
        class Gtk::Window * window2;
        class Gtk::TreeView * treeview2;
        class Gtk::ScrolledWindow * scrolledwindow5;
        class Gtk::Label * label62;
        class Gtk::SpinButton * from_sb;
        class Gtk::Label * label63;
        class Gtk::SpinButton * to_sb;
        class Gtk::HBox * hbox16;
        class Gtk::Alignment * alignment7;
        class Gtk::Image * image10;
        class Gtk::Label * label98;
        class Gtk::HBox * hbox27;
        class Gtk::Alignment * alignment26;
        class Gtk::Button * button10;
        class Gtk::Image * image11;
        class Gtk::Label * label99;
        class Gtk::HBox * hbox28;
        class Gtk::Alignment * alignment27;
        class Gtk::Button * button11;
        class Gtk::Image * image12;
        class Gtk::Label * label100;
        class Gtk::HBox * hbox29;
        class Gtk::Alignment * alignment28;
        class Gtk::Button * button20;
        class Gtk::Image * image13;
        class Gtk::Label * label101;
        class Gtk::HBox * hbox30;
        class Gtk::Alignment * alignment29;
        class Gtk::Button * button21;
        class Gtk::Image * image14;
        class Gtk::Label * label102;
        class Gtk::HBox * hbox31;
        class Gtk::Alignment * alignment30;
        class Gtk::Button * button22;
        class Gtk::Image * image15;
        class Gtk::Label * label103;
        class Gtk::HBox * hbox32;
        class Gtk::Alignment * alignment31;
        class Gtk::Button * button12;
        class Gtk::HBox * hbox15;
        class Gtk::VBox * vbox8;
protected:
        
        window2_glade();
        
        ~window2_glade();
private:
        virtual bool on_treeview2_button_press_event(GdkEventButton *ev) = 0;
        virtual void on_button10_clicked() = 0;
        virtual void on_button11_clicked() = 0;
        virtual void on_button20_clicked() = 0;
        virtual void on_button21_clicked() = 0;
        virtual void on_button22_clicked() = 0;
        virtual void on_button12_clicked() = 0;
};
#endif
