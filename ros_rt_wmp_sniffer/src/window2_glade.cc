// generated 2012/12/16 11:18:14 CET by danilo@dm1.(none)
// using glademm V2.6.0
//
// DO NOT EDIT THIS FILE ! It was created using
// glade-- wmpSniffer.glade
// for gtk 2.24.10 and gtkmm 2.24.2
//
// Please modify the corresponding derived classes in ./src/window2.cc


#if defined __GNUC__ && __GNUC__ < 3
#error This program will crash if compiled with g++ 2.x
// see the dynamic_cast bug in the gtkmm FAQ
#endif //
#include "config.h"
#include <gtkmmconfig.h>
#if GTKMM_MAJOR_VERSION==2 && GTKMM_MINOR_VERSION>2
#define GMM_GTKMM_22_24(a,b) b
#else //gtkmm 2.2
#define GMM_GTKMM_22_24(a,b) a
#endif //
#include "window2_glade.hh"
#include <gdk/gdkkeysyms.h>
#include <gtkmm/accelgroup.h>
#include <gtkmm/adjustment.h>

window2_glade::window2_glade(
)
{  window2 = this;
   gmm_data = new GlademmData(get_accel_group());
   treeview2 = Gtk::manage(new class Gtk::TreeView());
   scrolledwindow5 = Gtk::manage(new class Gtk::ScrolledWindow());
   label62 = Gtk::manage(new class Gtk::Label("From:"));
   
   Gtk::Adjustment *from_sb_adj = Gtk::manage(new class Gtk::Adjustment(0, 0, 1000000, 1, 10, 0));
   from_sb = Gtk::manage(new class Gtk::SpinButton(*from_sb_adj, 1, 0));
   label63 = Gtk::manage(new class Gtk::Label("To:"));
   
   Gtk::Adjustment *to_sb_adj = Gtk::manage(new class Gtk::Adjustment(1, 0, 1000000, 1, 10, 0));
   to_sb = Gtk::manage(new class Gtk::SpinButton(*to_sb_adj, 1, 0));
   hbox16 = Gtk::manage(new class Gtk::HBox(false, 0));
   alignment7 = Gtk::manage(new class Gtk::Alignment());
   image10 = Gtk::manage(new class Gtk::Image(Gtk::StockID("gtk-copy"), Gtk::IconSize(Gtk::ICON_SIZE_BUTTON)));
   label98 = Gtk::manage(new class Gtk::Label("Copy"));
   hbox27 = Gtk::manage(new class Gtk::HBox(false, 2));
   alignment26 = Gtk::manage(new class Gtk::Alignment());
   button10 = Gtk::manage(new class Gtk::Button());
   image11 = Gtk::manage(new class Gtk::Image(Gtk::StockID("gtk-yes"), Gtk::IconSize(Gtk::ICON_SIZE_BUTTON)));
   label99 = Gtk::manage(new class Gtk::Label("Apply"));
   hbox28 = Gtk::manage(new class Gtk::HBox(false, 2));
   alignment27 = Gtk::manage(new class Gtk::Alignment());
   button11 = Gtk::manage(new class Gtk::Button());
   image12 = Gtk::manage(new class Gtk::Image(Gtk::StockID("gtk-home"), Gtk::IconSize(Gtk::ICON_SIZE_BUTTON)));
   label100 = Gtk::manage(new class Gtk::Label("Reset"));
   hbox29 = Gtk::manage(new class Gtk::HBox(false, 2));
   alignment28 = Gtk::manage(new class Gtk::Alignment());
   button20 = Gtk::manage(new class Gtk::Button());
   image13 = Gtk::manage(new class Gtk::Image(Gtk::StockID("gtk-zoom-fit"), Gtk::IconSize(Gtk::ICON_SIZE_BUTTON)));
   label101 = Gtk::manage(new class Gtk::Label("EFZ"));
   hbox30 = Gtk::manage(new class Gtk::HBox(false, 2));
   alignment29 = Gtk::manage(new class Gtk::Alignment());
   button21 = Gtk::manage(new class Gtk::Button());
   image14 = Gtk::manage(new class Gtk::Image(Gtk::StockID("gtk-cut"), Gtk::IconSize(Gtk::ICON_SIZE_BUTTON)));
   label102 = Gtk::manage(new class Gtk::Label("Cut"));
   hbox31 = Gtk::manage(new class Gtk::HBox(false, 2));
   alignment30 = Gtk::manage(new class Gtk::Alignment());
   button22 = Gtk::manage(new class Gtk::Button());
   image15 = Gtk::manage(new class Gtk::Image(Gtk::StockID("gtk-close"), Gtk::IconSize(Gtk::ICON_SIZE_BUTTON)));
   label103 = Gtk::manage(new class Gtk::Label("Close"));
   hbox32 = Gtk::manage(new class Gtk::HBox(false, 2));
   alignment31 = Gtk::manage(new class Gtk::Alignment());
   button12 = Gtk::manage(new class Gtk::Button());
   hbox15 = Gtk::manage(new class Gtk::HBox(false, 0));
   vbox8 = Gtk::manage(new class Gtk::VBox(false, 0));
   treeview2->set_events(Gdk::BUTTON_PRESS_MASK);
   treeview2->set_flags(Gtk::CAN_FOCUS);
   scrolledwindow5->set_flags(Gtk::CAN_FOCUS);
   scrolledwindow5->set_shadow_type(Gtk::SHADOW_IN);
   scrolledwindow5->set_policy(Gtk::POLICY_NEVER, Gtk::POLICY_AUTOMATIC);
   scrolledwindow5->add(*treeview2);
   label62->unset_flags(Gtk::CAN_FOCUS);
   from_sb->set_flags(Gtk::CAN_FOCUS);
   label63->unset_flags(Gtk::CAN_FOCUS);
   to_sb->set_flags(Gtk::CAN_FOCUS);
   hbox16->unset_flags(Gtk::CAN_FOCUS);
   hbox16->pack_start(*label62, Gtk::PACK_SHRINK, 0);
   hbox16->pack_start(*from_sb);
   hbox16->pack_start(*label63, Gtk::PACK_SHRINK, 0);
   hbox16->pack_start(*to_sb);
   alignment7->unset_flags(Gtk::CAN_FOCUS);
   alignment7->add(*hbox16);
   image10->unset_flags(Gtk::CAN_FOCUS);
   label98->unset_flags(Gtk::CAN_FOCUS);
   hbox27->unset_flags(Gtk::CAN_FOCUS);
   hbox27->pack_start(*image10, Gtk::PACK_SHRINK, 0);
   hbox27->pack_start(*label98);
   alignment26->unset_flags(Gtk::CAN_FOCUS);
   alignment26->add(*hbox27);
   button10->set_size_request(80,-1);
   button10->set_flags(Gtk::CAN_FOCUS);
   button10->add(*alignment26);
   image11->unset_flags(Gtk::CAN_FOCUS);
   label99->unset_flags(Gtk::CAN_FOCUS);
   hbox28->unset_flags(Gtk::CAN_FOCUS);
   hbox28->pack_start(*image11, Gtk::PACK_SHRINK, 0);
   hbox28->pack_start(*label99, Gtk::PACK_SHRINK, 0);
   alignment27->unset_flags(Gtk::CAN_FOCUS);
   alignment27->add(*hbox28);
   button11->set_size_request(80,-1);
   button11->set_flags(Gtk::CAN_FOCUS);
   button11->add(*alignment27);
   image12->unset_flags(Gtk::CAN_FOCUS);
   label100->unset_flags(Gtk::CAN_FOCUS);
   hbox29->unset_flags(Gtk::CAN_FOCUS);
   hbox29->pack_start(*image12, Gtk::PACK_SHRINK, 0);
   hbox29->pack_start(*label100, Gtk::PACK_SHRINK, 0);
   alignment28->unset_flags(Gtk::CAN_FOCUS);
   alignment28->add(*hbox29);
   button20->set_size_request(80,-1);
   button20->set_flags(Gtk::CAN_FOCUS);
   button20->add(*alignment28);
   image13->unset_flags(Gtk::CAN_FOCUS);
   label101->unset_flags(Gtk::CAN_FOCUS);
   hbox30->unset_flags(Gtk::CAN_FOCUS);
   hbox30->pack_start(*image13, Gtk::PACK_SHRINK, 0);
   hbox30->pack_start(*label101, Gtk::PACK_SHRINK, 0);
   alignment29->unset_flags(Gtk::CAN_FOCUS);
   alignment29->add(*hbox30);
   button21->set_size_request(80,-1);
   button21->set_flags(Gtk::CAN_FOCUS);
   button21->add(*alignment29);
   image14->unset_flags(Gtk::CAN_FOCUS);
   label102->unset_flags(Gtk::CAN_FOCUS);
   hbox31->unset_flags(Gtk::CAN_FOCUS);
   hbox31->pack_start(*image14, Gtk::PACK_SHRINK, 0);
   hbox31->pack_start(*label102, Gtk::PACK_SHRINK, 0);
   alignment30->unset_flags(Gtk::CAN_FOCUS);
   alignment30->add(*hbox31);
   button22->set_size_request(80,-1);
   button22->set_flags(Gtk::CAN_FOCUS);
   button22->add(*alignment30);
   image15->unset_flags(Gtk::CAN_FOCUS);
   label103->unset_flags(Gtk::CAN_FOCUS);
   hbox32->unset_flags(Gtk::CAN_FOCUS);
   hbox32->pack_start(*image15, Gtk::PACK_SHRINK, 0);
   hbox32->pack_start(*label103, Gtk::PACK_SHRINK, 0);
   alignment31->unset_flags(Gtk::CAN_FOCUS);
   alignment31->add(*hbox32);
   button12->set_size_request(80,-1);
   button12->set_flags(Gtk::CAN_FOCUS);
   button12->add(*alignment31);
   hbox15->unset_flags(Gtk::CAN_FOCUS);
   hbox15->pack_start(*button10);
   hbox15->pack_start(*button11);
   hbox15->pack_start(*button20);
   hbox15->pack_start(*button21);
   hbox15->pack_start(*button22);
   hbox15->pack_start(*button12);
   vbox8->unset_flags(Gtk::CAN_FOCUS);
   vbox8->pack_start(*scrolledwindow5);
   vbox8->pack_start(*alignment7, Gtk::PACK_SHRINK, 0);
   vbox8->pack_start(*hbox15, Gtk::PACK_SHRINK, 0);
   window2->unset_flags(Gtk::CAN_FOCUS);
   window2->set_title("Statistics");
   window2->add(*vbox8);
   treeview2->show();
   scrolledwindow5->show();
   label62->show();
   from_sb->show();
   label63->show();
   to_sb->show();
   hbox16->show();
   alignment7->show();
   image10->show();
   label98->show();
   hbox27->show();
   alignment26->show();
   button10->show();
   image11->show();
   label99->show();
   hbox28->show();
   alignment27->show();
   button11->show();
   image12->show();
   label100->show();
   hbox29->show();
   alignment28->show();
   button20->show();
   image13->show();
   label101->show();
   hbox30->show();
   alignment29->show();
   button21->show();
   image14->show();
   label102->show();
   hbox31->show();
   alignment30->show();
   button22->show();
   image15->show();
   label103->show();
   hbox32->show();
   alignment31->show();
   button12->show();
   hbox15->show();
   vbox8->show();
   window2->show();
   treeview2->signal_button_press_event().connect(sigc::mem_fun(*this, &window2_glade::on_treeview2_button_press_event), false);
   button10->signal_clicked().connect(sigc::mem_fun(*this, &window2_glade::on_button10_clicked), false);
   button11->signal_clicked().connect(sigc::mem_fun(*this, &window2_glade::on_button11_clicked), false);
   button20->signal_clicked().connect(sigc::mem_fun(*this, &window2_glade::on_button20_clicked), false);
   button21->signal_clicked().connect(sigc::mem_fun(*this, &window2_glade::on_button21_clicked), false);
   button22->signal_clicked().connect(sigc::mem_fun(*this, &window2_glade::on_button22_clicked), false);
   button12->signal_clicked().connect(sigc::mem_fun(*this, &window2_glade::on_button12_clicked), false);
}

window2_glade::~window2_glade()
{  delete gmm_data;
}
