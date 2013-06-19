// generated 2012/12/16 11:18:14 CET by danilo@dm1.(none)
// using glademm V2.6.0
//
// DO NOT EDIT THIS FILE ! It was created using
// glade-- wmpSniffer.glade
// for gtk 2.24.10 and gtkmm 2.24.2
//
// Please modify the corresponding derived classes in ./src/rec_param_dlg.cc


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
#include "rec_param_dlg_glade.hh"
#include <gdk/gdkkeysyms.h>
#include <gtkmm/accelgroup.h>
#include <gtkmm/adjustment.h>
#include <gtkmm/radiobutton.h>

rec_param_dlg_glade::rec_param_dlg_glade(
)
{  rec_param_dlg = this;
   gmm_data = new GlademmData(get_accel_group());
   cancelbutton1 = Gtk::manage(new class Gtk::Button(Gtk::StockID("gtk-cancel")));
   ok_btn = Gtk::manage(new class Gtk::Button(Gtk::StockID("gtk-ok")));
   label47 = Gtk::manage(new class Gtk::Label("Number of Nodes"));
   
   Gtk::Adjustment *num_node_spin_adj = Gtk::manage(new class Gtk::Adjustment(4, 0, 100, 1, 0, 0));
   num_node_spin = Gtk::manage(new class Gtk::SpinButton(*num_node_spin_adj, 1, 0));
   
   Gtk::RadioButton::Group _RadioBGroup_real_rb;
   real_rb = Gtk::manage(new class Gtk::RadioButton(_RadioBGroup_real_rb, "Linux"));
   marte_rb = Gtk::manage(new class Gtk::RadioButton(_RadioBGroup_real_rb, "MaRTE OS"));
   shmem_rb = Gtk::manage(new class Gtk::RadioButton(_RadioBGroup_real_rb, "Shared Memory"));
   shmem_file = Gtk::manage(new class Gtk::Entry());
   shmem_btn = Gtk::manage(new class Gtk::Button("..."));
   hbox23 = Gtk::manage(new class Gtk::HBox(false, 0));
   compile_cb = Gtk::manage(new class Gtk::CheckButton("Compile  "));
   exec_cb = Gtk::manage(new class Gtk::CheckButton("Execute  "));
   log_cb = Gtk::manage(new class Gtk::CheckButton("Log"));
   hbox24 = Gtk::manage(new class Gtk::HBox(false, 0));
   param_txt = Gtk::manage(new class Gtk::Entry());
   alignment23 = Gtk::manage(new class Gtk::Alignment());
   label95 = Gtk::manage(new class Gtk::Label(""));
   frame14 = Gtk::manage(new class Gtk::Frame());
   label94 = Gtk::manage(new class Gtk::Label("Parameters"));
#if GTKMM_MAJOR_VERSION==2 && GTKMM_MINOR_VERSION>2
   expander1 = Gtk::manage(new class Gtk::Expander());
#else //
   expander1 = Gtk::manage(new class Gtk::HandleBox());
#endif //
   vbox19 = Gtk::manage(new class Gtk::VBox(false, 0));
   alignment20 = Gtk::manage(new class Gtk::Alignment());
   label91 = Gtk::manage(new class Gtk::Label("<b>Local</b>"));
   frame13 = Gtk::manage(new class Gtk::Frame());
   vbox18 = Gtk::manage(new class Gtk::VBox(false, 0));
   alignment16 = Gtk::manage(new class Gtk::Alignment());
   label86 = Gtk::manage(new class Gtk::Label("<b>Online</b>"));
   frame9 = Gtk::manage(new class Gtk::Frame());
   vbox17 = Gtk::manage(new class Gtk::VBox(false, 0));
   filename_txt = Gtk::manage(new class Gtk::Entry());
   shmem_btn1 = Gtk::manage(new class Gtk::Button("..."));
   hbox1 = Gtk::manage(new class Gtk::HBox(false, 0));
   vbox1 = Gtk::manage(new class Gtk::VBox(false, 0));
   alignment1 = Gtk::manage(new class Gtk::Alignment());
   label3 = Gtk::manage(new class Gtk::Label("<b>Filename</b>"));
   frame1 = Gtk::manage(new class Gtk::Frame());
   vbox6 = Gtk::manage(new class Gtk::VBox(false, 0));
   cancelbutton1->set_flags(Gtk::CAN_FOCUS);
   cancelbutton1->set_flags(Gtk::CAN_DEFAULT);
   ok_btn->set_flags(Gtk::CAN_FOCUS);
   ok_btn->set_flags(Gtk::CAN_DEFAULT);
   rec_param_dlg->get_action_area()->unset_flags(Gtk::CAN_FOCUS);
   rec_param_dlg->get_action_area()->property_layout_style().set_value(Gtk::BUTTONBOX_SPREAD);
   label47->unset_flags(Gtk::CAN_FOCUS);
   num_node_spin->set_flags(Gtk::CAN_FOCUS);
   num_node_spin->set_numeric(true);
   real_rb->set_flags(Gtk::CAN_FOCUS);
   real_rb->set_mode(true);
   real_rb->set_active(true);
   marte_rb->set_flags(Gtk::CAN_FOCUS);
   marte_rb->set_mode(true);
   marte_rb->set_active(true);
   shmem_rb->set_flags(Gtk::CAN_FOCUS);
   shmem_rb->set_mode(true);
   shmem_rb->set_active(true);
   shmem_file->set_flags(Gtk::CAN_FOCUS);
   shmem_btn->set_flags(Gtk::CAN_FOCUS);
   hbox23->unset_flags(Gtk::CAN_FOCUS);
   hbox23->pack_start(*shmem_file);
   hbox23->pack_start(*shmem_btn, Gtk::PACK_SHRINK, 0);
   compile_cb->set_flags(Gtk::CAN_FOCUS);
   compile_cb->set_mode(true);
   exec_cb->set_flags(Gtk::CAN_FOCUS);
   exec_cb->set_mode(true);
   log_cb->set_flags(Gtk::CAN_FOCUS);
   log_cb->set_mode(true);
   hbox24->unset_flags(Gtk::CAN_FOCUS);
   hbox24->pack_start(*compile_cb, Gtk::PACK_SHRINK, 0);
   hbox24->pack_start(*exec_cb, Gtk::PACK_SHRINK, 0);
   hbox24->pack_start(*log_cb, Gtk::PACK_SHRINK, 0);
   param_txt->set_flags(Gtk::CAN_FOCUS);
   alignment23->unset_flags(Gtk::CAN_FOCUS);
   alignment23->add(*param_txt);
   label95->unset_flags(Gtk::CAN_FOCUS);
   label95->set_use_markup(true);
   frame14->unset_flags(Gtk::CAN_FOCUS);
   frame14->set_shadow_type(Gtk::SHADOW_NONE);
   frame14->set_label_align(0,0);
   frame14->add(*alignment23);
   frame14->set_label_widget(*label95);
   label94->unset_flags(Gtk::CAN_FOCUS);
   expander1->set_flags(Gtk::CAN_FOCUS);
#if GTKMM_MAJOR_VERSION==2 && GTKMM_MINOR_VERSION>2
   expander1->set_expanded(true);
#endif //
   expander1->add(*frame14);
#if GTKMM_MAJOR_VERSION==2 && GTKMM_MINOR_VERSION>2
   expander1->set_label_widget(*label94);
#endif //
   vbox19->unset_flags(Gtk::CAN_FOCUS);
   vbox19->pack_start(*shmem_rb, Gtk::PACK_SHRINK, 0);
   vbox19->pack_start(*hbox23);
   vbox19->pack_start(*hbox24, Gtk::PACK_SHRINK, 0);
   vbox19->pack_start(*expander1);
   alignment20->unset_flags(Gtk::CAN_FOCUS);
   alignment20->add(*vbox19);
   label91->unset_flags(Gtk::CAN_FOCUS);
   label91->set_use_markup(true);
   frame13->unset_flags(Gtk::CAN_FOCUS);
   frame13->set_shadow_type(Gtk::SHADOW_NONE);
   frame13->set_label_align(0,0);
   frame13->add(*alignment20);
   frame13->set_label_widget(*label91);
   vbox18->unset_flags(Gtk::CAN_FOCUS);
   vbox18->pack_start(*real_rb, Gtk::PACK_SHRINK, 0);
   vbox18->pack_start(*marte_rb, Gtk::PACK_SHRINK, 0);
   vbox18->pack_start(*frame13, Gtk::PACK_SHRINK, 0);
   alignment16->unset_flags(Gtk::CAN_FOCUS);
   alignment16->add(*vbox18);
   label86->unset_flags(Gtk::CAN_FOCUS);
   label86->set_use_markup(true);
   frame9->unset_flags(Gtk::CAN_FOCUS);
   frame9->set_label_align(0,0);
   frame9->add(*alignment16);
   frame9->set_label_widget(*label86);
   vbox17->unset_flags(Gtk::CAN_FOCUS);
   vbox17->pack_start(*frame9, Gtk::PACK_SHRINK, 0);
   filename_txt->set_flags(Gtk::CAN_FOCUS);
   shmem_btn1->set_flags(Gtk::CAN_FOCUS);
   hbox1->unset_flags(Gtk::CAN_FOCUS);
   hbox1->pack_start(*filename_txt);
   hbox1->pack_start(*shmem_btn1, Gtk::PACK_SHRINK, 0);
   vbox1->unset_flags(Gtk::CAN_FOCUS);
   vbox1->pack_start(*hbox1);
   alignment1->unset_flags(Gtk::CAN_FOCUS);
   alignment1->add(*vbox1);
   label3->unset_flags(Gtk::CAN_FOCUS);
   label3->set_alignment(0.48,0.5);
   label3->set_use_markup(true);
   frame1->unset_flags(Gtk::CAN_FOCUS);
   frame1->set_shadow_type(Gtk::SHADOW_NONE);
   frame1->set_label_align(0,0);
   frame1->add(*alignment1);
   frame1->set_label_widget(*label3);
   vbox6->unset_flags(Gtk::CAN_FOCUS);
   vbox6->pack_start(*label47, Gtk::PACK_SHRINK, 0);
   vbox6->pack_start(*num_node_spin, Gtk::PACK_SHRINK, 0);
   vbox6->pack_start(*vbox17, Gtk::PACK_SHRINK, 0);
   vbox6->pack_start(*frame1, Gtk::PACK_SHRINK, 0);
   rec_param_dlg->get_vbox()->unset_flags(Gtk::CAN_FOCUS);
   rec_param_dlg->get_vbox()->pack_start(*vbox6, Gtk::PACK_SHRINK, 0);
   rec_param_dlg->set_size_request(400,200);
   rec_param_dlg->unset_flags(Gtk::CAN_FOCUS);
   rec_param_dlg->set_title("Recording Parameters");
   rec_param_dlg->set_modal(true);
   rec_param_dlg->set_has_separator(true);
   rec_param_dlg->add_action_widget(*cancelbutton1, -6);
   rec_param_dlg->add_action_widget(*ok_btn, -5);
   cancelbutton1->show();
   ok_btn->show();
   label47->show();
   num_node_spin->show();
   real_rb->show();
   marte_rb->show();
   shmem_rb->show();
   shmem_file->show();
   shmem_btn->show();
   hbox23->show();
   compile_cb->show();
   exec_cb->show();
   log_cb->show();
   hbox24->show();
   param_txt->show();
   alignment23->show();
   label95->show();
   frame14->show();
   label94->show();
   expander1->show();
   vbox19->show();
   alignment20->show();
   label91->show();
   frame13->show();
   vbox18->show();
   alignment16->show();
   label86->show();
   frame9->show();
   vbox17->show();
   filename_txt->show();
   shmem_btn1->show();
   hbox1->show();
   vbox1->show();
   alignment1->show();
   label3->show();
   frame1->show();
   vbox6->show();
   rec_param_dlg->show();
   real_rb->signal_clicked().connect(sigc::mem_fun(*this, &rec_param_dlg_glade::on_sim_rb_clicked), false);
   marte_rb->signal_clicked().connect(sigc::mem_fun(*this, &rec_param_dlg_glade::on_sim_rb_clicked), false);
   shmem_rb->signal_clicked().connect(sigc::mem_fun(*this, &rec_param_dlg_glade::on_sim_rb_clicked), false);
   shmem_btn->signal_clicked().connect(sigc::mem_fun(*this, &rec_param_dlg_glade::on_shmem_btn_clicked), false);
   shmem_btn1->signal_clicked().connect(sigc::mem_fun(*this, &rec_param_dlg_glade::on_filename_clicked), false);
}

rec_param_dlg_glade::~rec_param_dlg_glade()
{  delete gmm_data;
}
