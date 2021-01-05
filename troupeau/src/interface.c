/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  g_object_set_data_full (G_OBJECT (component), name, \
    gtk_widget_ref (widget), (GDestroyNotify) gtk_widget_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)

GtkWidget*
create_window1 (void)
{
  GtkWidget *window1;
  GdkPixbuf *window1_icon_pixbuf;
  GtkWidget *fixed1;
  GtkWidget *notebook1;
  GtkWidget *fixed2;
  GtkWidget *entryidi;
  GtkWidget *entrytypei;
  GtkWidget *entrydateri;
  GtkWidget *entrydateni;
  GtkWidget *label5;
  GtkObject *spinbutton_adj;
  GtkWidget *spinbutton;
  GtkWidget *image2;
  GtkWidget *calendar1;
  GtkWidget *label4;
  GtkWidget *label3;
  GtkWidget *label8;
  GtkWidget *label9;
  GtkWidget *label6;
  GtkWidget *label2;
  GtkWidget *label7;
  GtkWidget *ajouteri;
  GtkWidget *alignment1;
  GtkWidget *hbox1;
  GtkWidget *image3;
  GtkWidget *label12;
  GtkWidget *idi;
  GtkWidget *typei;
  GtkWidget *dateri;
  GtkWidget *dateni;
  GtkWidget *comboboxsexe;
  GtkWidget *labelexiste;
  GtkWidget *label11;
  GtkWidget *label17;
  GtkWidget *fixed6;
  GtkWidget *fixed8;
  GtkWidget *treeviewi1;
  GtkWidget *entryidi1;
  GtkWidget *entrytypei1;
  GtkWidget *entrydateni1;
  GtkObject *spinbutton2_adj;
  GtkWidget *spinbutton2;
  GtkWidget *vseparator3;
  GtkWidget *vseparator4;
  GtkWidget *label36;
  GtkWidget *label37;
  GtkWidget *label38;
  GtkWidget *label39;
  GtkWidget *label40;
  GtkWidget *succesi;
  GtkWidget *label35;
  GtkWidget *image6;
  GtkWidget *label45;
  GtkWidget *supprimeri1;
  GtkWidget *alignment2;
  GtkWidget *hbox2;
  GtkWidget *image4;
  GtkWidget *label43;
  GtkWidget *modifieri2;
  GtkWidget *alignment3;
  GtkWidget *hbox3;
  GtkWidget *image5;
  GtkWidget *label44;
  GtkWidget *comboboxsexe2;
  GtkWidget *label55;
  GtkWidget *label56;
  GtkWidget *fixed7;
  GtkWidget *label42;
  GtkWidget *fixed9;
  GtkWidget *treeviewi2;
  GtkWidget *entryidi2;
  GtkWidget *label48;
  GtkWidget *chercheri;
  GtkWidget *alignment5;
  GtkWidget *hbox5;
  GtkWidget *image9;
  GtkWidget *label50;
  GtkWidget *messageresi;
  GtkWidget *nbi;
  GtkWidget *calendar3;
  GtkWidget *labelidi;
  GtkWidget *label47;
  GtkWidget *fixed10;
  GtkWidget *mouton;
  GSList *mouton_group = NULL;
  GtkWidget *Brebi;
  GtkWidget *taureau;
  GtkWidget *vache;
  GtkWidget *okka;
  GtkWidget *alignment6;
  GtkWidget *hbox6;
  GtkWidget *image10;
  GtkWidget *label54;
  GtkWidget *calendar2;
  GtkWidget *label53;
  GtkWidget *label52;
  GtkWidget *nombret;
  GtkWidget *label57;
  GtkWidget *label58;
  GtkWidget *okkaka;
  GtkWidget *alignment7;
  GtkWidget *hbox7;
  GtkWidget *image11;
  GtkWidget *label59;
  GtkWidget *label51;
  GtkWidget *label1;
  GtkWidget *quitter;
  GtkWidget *alignment4;
  GtkWidget *hbox4;
  GtkWidget *image8;
  GtkWidget *label49;

  window1 = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (window1), _("GESTION DES OUVRIERS "));
  gtk_window_set_modal (GTK_WINDOW (window1), TRUE);
  window1_icon_pixbuf = create_pixbuf ("index11.jpeg");
  if (window1_icon_pixbuf)
    {
      gtk_window_set_icon (GTK_WINDOW (window1), window1_icon_pixbuf);
      gdk_pixbuf_unref (window1_icon_pixbuf);
    }

  fixed1 = gtk_fixed_new ();
  gtk_widget_show (fixed1);
  gtk_container_add (GTK_CONTAINER (window1), fixed1);

  notebook1 = gtk_notebook_new ();
  gtk_widget_show (notebook1);
  gtk_fixed_put (GTK_FIXED (fixed1), notebook1, 32, 208);
  gtk_widget_set_size_request (notebook1, 1264, 600);

  fixed2 = gtk_fixed_new ();
  gtk_widget_show (fixed2);
  gtk_container_add (GTK_CONTAINER (notebook1), fixed2);

  entryidi = gtk_entry_new ();
  gtk_widget_show (entryidi);
  gtk_fixed_put (GTK_FIXED (fixed2), entryidi, 328, 88);
  gtk_widget_set_size_request (entryidi, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entryidi), 8226);

  entrytypei = gtk_entry_new ();
  gtk_widget_show (entrytypei);
  gtk_fixed_put (GTK_FIXED (fixed2), entrytypei, 328, 136);
  gtk_widget_set_size_request (entrytypei, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entrytypei), 8226);

  entrydateri = gtk_entry_new ();
  gtk_widget_show (entrydateri);
  gtk_fixed_put (GTK_FIXED (fixed2), entrydateri, 328, 192);
  gtk_widget_set_size_request (entrydateri, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entrydateri), 8226);

  entrydateni = gtk_entry_new ();
  gtk_widget_show (entrydateni);
  gtk_fixed_put (GTK_FIXED (fixed2), entrydateni, 328, 256);
  gtk_widget_set_size_request (entrydateni, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entrydateni), 8226);

  label5 = gtk_label_new ("");
  gtk_widget_show (label5);
  gtk_fixed_put (GTK_FIXED (fixed2), label5, 256, 64);
  gtk_widget_set_size_request (label5, 72, 25);

  spinbutton_adj = gtk_adjustment_new (400, 0, 1200, 1, 10, 10);
  spinbutton = gtk_spin_button_new (GTK_ADJUSTMENT (spinbutton_adj), 1, 0);
  gtk_widget_show (spinbutton);
  gtk_fixed_put (GTK_FIXED (fixed2), spinbutton, 376, 376);
  gtk_widget_set_size_request (spinbutton, 60, 27);

  image2 = gtk_image_new_from_stock ("gtk-add", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image2);
  gtk_fixed_put (GTK_FIXED (fixed2), image2, 56, 32);
  gtk_widget_set_size_request (image2, 37, 24);

  calendar1 = gtk_calendar_new ();
  gtk_widget_show (calendar1);
  gtk_fixed_put (GTK_FIXED (fixed2), calendar1, 1000, 376);
  gtk_widget_set_size_request (calendar1, 260, 184);
  gtk_calendar_display_options (GTK_CALENDAR (calendar1),
                                GTK_CALENDAR_SHOW_HEADING
                                | GTK_CALENDAR_SHOW_DAY_NAMES);

  label4 = gtk_label_new (_("<b>Identifiant:</b>"));
  gtk_widget_show (label4);
  gtk_fixed_put (GTK_FIXED (fixed2), label4, 184, 80);
  gtk_widget_set_size_request (label4, 80, 32);
  gtk_label_set_use_markup (GTK_LABEL (label4), TRUE);

  label3 = gtk_label_new (_("<b>Type:</b>"));
  gtk_widget_show (label3);
  gtk_fixed_put (GTK_FIXED (fixed2), label3, 168, 128);
  gtk_widget_set_size_request (label3, 104, 40);
  gtk_label_set_use_markup (GTK_LABEL (label3), TRUE);

  label8 = gtk_label_new (_("<b>Sexe :</b>"));
  gtk_widget_show (label8);
  gtk_fixed_put (GTK_FIXED (fixed2), label8, 168, 304);
  gtk_widget_set_size_request (label8, 88, 40);
  gtk_label_set_use_markup (GTK_LABEL (label8), TRUE);

  label9 = gtk_label_new (_("<b>Production en litre:</b>\n               (mois)"));
  gtk_widget_show (label9);
  gtk_fixed_put (GTK_FIXED (fixed2), label9, 160, 368);
  gtk_widget_set_size_request (label9, 152, 48);
  gtk_label_set_use_markup (GTK_LABEL (label9), TRUE);

  label6 = gtk_label_new (_("<span font_desc=\"Purisa\"foreground=\"purple\"><b>Ajouter un \303\251l\303\251ment \303\240 votre troupeau:</b></span>"));
  gtk_widget_show (label6);
  gtk_fixed_put (GTK_FIXED (fixed2), label6, 88, 16);
  gtk_widget_set_size_request (label6, 336, 56);
  gtk_label_set_use_markup (GTK_LABEL (label6), TRUE);

  label2 = gtk_label_new (_("<b>Date de Registrement:</b>"));
  gtk_widget_show (label2);
  gtk_fixed_put (GTK_FIXED (fixed2), label2, 130, 184);
  gtk_widget_set_size_request (label2, 170, 48);
  gtk_label_set_use_markup (GTK_LABEL (label2), TRUE);

  label7 = gtk_label_new (_("<b>Date de Naissance:</b>"));
  gtk_widget_show (label7);
  gtk_fixed_put (GTK_FIXED (fixed2), label7, 128, 248);
  gtk_widget_set_size_request (label7, 168, 48);
  gtk_label_set_use_markup (GTK_LABEL (label7), TRUE);

  ajouteri = gtk_button_new ();
  gtk_widget_show (ajouteri);
  gtk_fixed_put (GTK_FIXED (fixed2), ajouteri, 536, 456);
  gtk_widget_set_size_request (ajouteri, 136, 48);

  alignment1 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment1);
  gtk_container_add (GTK_CONTAINER (ajouteri), alignment1);

  hbox1 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox1);
  gtk_container_add (GTK_CONTAINER (alignment1), hbox1);

  image3 = gtk_image_new_from_stock ("gtk-add", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image3);
  gtk_box_pack_start (GTK_BOX (hbox1), image3, FALSE, FALSE, 0);

  label12 = gtk_label_new_with_mnemonic (_("Ajouter "));
  gtk_widget_show (label12);
  gtk_box_pack_start (GTK_BOX (hbox1), label12, FALSE, FALSE, 0);

  idi = gtk_label_new_with_mnemonic (_("<span foreground=\"red\" ><b>L'identifiant est obligatoire! </b></span>"));
  gtk_fixed_put (GTK_FIXED (fixed2), idi, 608, 80);
  gtk_widget_set_size_request (idi, 232, 32);
  gtk_label_set_use_markup (GTK_LABEL (idi), TRUE);

  typei = gtk_label_new_with_mnemonic (_("<span foreground=\"red\" ><b>Le Type est obligatoire! </b></span>"));
  gtk_fixed_put (GTK_FIXED (fixed2), typei, 640, 136);
  gtk_widget_set_size_request (typei, 176, 32);
  gtk_label_set_use_markup (GTK_LABEL (typei), TRUE);

  dateri = gtk_label_new_with_mnemonic (_("<span foreground=\"red\" ><b>Ce champ est obligatoire ! </b></span>"));
  gtk_fixed_put (GTK_FIXED (fixed2), dateri, 632, 184);
  gtk_widget_set_size_request (dateri, 200, 48);
  gtk_label_set_use_markup (GTK_LABEL (dateri), TRUE);

  dateni = gtk_label_new_with_mnemonic (_("<span foreground=\"red\" ><b>Ce champ est obligatoire ! </b></span>"));
  gtk_fixed_put (GTK_FIXED (fixed2), dateni, 592, 248);
  gtk_widget_set_size_request (dateni, 240, 40);
  gtk_label_set_use_markup (GTK_LABEL (dateni), TRUE);

  comboboxsexe = gtk_combo_box_entry_new_text ();
  gtk_widget_show (comboboxsexe);
  gtk_fixed_put (GTK_FIXED (fixed2), comboboxsexe, 328, 312);
  gtk_widget_set_size_request (comboboxsexe, 189, 29);
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxsexe), _("Masculin"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxsexe), _("Feminin"));

  labelexiste = gtk_label_new_with_mnemonic (_("<span foreground=\"red\" ><b> Cet identifiant existe!</b></span>"));
  gtk_fixed_put (GTK_FIXED (fixed2), labelexiste, 680, 456);
  gtk_widget_set_size_request (labelexiste, 192, 25);
  gtk_label_set_use_markup (GTK_LABEL (labelexiste), TRUE);

  label11 = gtk_label_new_with_mnemonic (_("<span foreground=\"green\" ><b> Element Ajouter !</b></span>"));
  gtk_fixed_put (GTK_FIXED (fixed2), label11, 672, 488);
  gtk_widget_set_size_request (label11, 216, 25);
  gtk_label_set_use_markup (GTK_LABEL (label11), TRUE);

  label17 = gtk_label_new (_("<span font_desc=\"Purisa\"foreground=\"purple\"><b>ajouter</b></span>"));
  gtk_widget_show (label17);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook1), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook1), 0), label17);
  gtk_label_set_use_markup (GTK_LABEL (label17), TRUE);

  fixed6 = gtk_fixed_new ();
  gtk_widget_show (fixed6);
  gtk_container_add (GTK_CONTAINER (notebook1), fixed6);

  fixed8 = gtk_fixed_new ();
  gtk_widget_show (fixed8);
  gtk_fixed_put (GTK_FIXED (fixed6), fixed8, 224, 17);
  gtk_widget_set_size_request (fixed8, 80, 16);

  treeviewi1 = gtk_tree_view_new ();
  gtk_widget_show (treeviewi1);
  gtk_fixed_put (GTK_FIXED (fixed8), treeviewi1, 0, 48);
  gtk_widget_set_size_request (treeviewi1, 584, 352);

  entryidi1 = gtk_entry_new ();
  gtk_widget_show (entryidi1);
  gtk_fixed_put (GTK_FIXED (fixed8), entryidi1, 784, 72);
  gtk_widget_set_size_request (entryidi1, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entryidi1), 8226);

  entrytypei1 = gtk_entry_new ();
  gtk_widget_show (entrytypei1);
  gtk_fixed_put (GTK_FIXED (fixed8), entrytypei1, 784, 120);
  gtk_widget_set_size_request (entrytypei1, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entrytypei1), 8226);

  entrydateni1 = gtk_entry_new ();
  gtk_widget_show (entrydateni1);
  gtk_fixed_put (GTK_FIXED (fixed8), entrydateni1, 784, 168);
  gtk_widget_set_size_request (entrydateni1, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entrydateni1), 8226);

  spinbutton2_adj = gtk_adjustment_new (400, 0, 1200, 1, 10, 10);
  spinbutton2 = gtk_spin_button_new (GTK_ADJUSTMENT (spinbutton2_adj), 1, 0);
  gtk_widget_show (spinbutton2);
  gtk_fixed_put (GTK_FIXED (fixed8), spinbutton2, 784, 264);
  gtk_widget_set_size_request (spinbutton2, 60, 27);

  vseparator3 = gtk_vseparator_new ();
  gtk_widget_show (vseparator3);
  gtk_fixed_put (GTK_FIXED (fixed8), vseparator3, 664, 32);
  gtk_widget_set_size_request (vseparator3, 16, 16);

  vseparator4 = gtk_vseparator_new ();
  gtk_widget_show (vseparator4);
  gtk_fixed_put (GTK_FIXED (fixed8), vseparator4, 664, 384);
  gtk_widget_set_size_request (vseparator4, 16, 16);

  label36 = gtk_label_new_with_mnemonic (_("<b>Identifiant</b>"));
  gtk_widget_show (label36);
  gtk_fixed_put (GTK_FIXED (fixed8), label36, 700, 75);
  gtk_widget_set_size_request (label36, 80, 17);
  gtk_label_set_use_markup (GTK_LABEL (label36), TRUE);

  label37 = gtk_label_new (_("<b>Date de naissance</b>"));
  gtk_widget_show (label37);
  gtk_fixed_put (GTK_FIXED (fixed8), label37, 608, 170);
  gtk_widget_set_size_request (label37, 161, 25);
  gtk_label_set_use_markup (GTK_LABEL (label37), TRUE);

  label38 = gtk_label_new (_("<b>Type</b>"));
  gtk_widget_show (label38);
  gtk_fixed_put (GTK_FIXED (fixed8), label38, 688, 125);
  gtk_widget_set_size_request (label38, 81, 17);
  gtk_label_set_use_markup (GTK_LABEL (label38), TRUE);

  label39 = gtk_label_new (_("<b>Sexe</b>"));
  gtk_widget_show (label39);
  gtk_fixed_put (GTK_FIXED (fixed8), label39, 720, 225);
  gtk_widget_set_size_request (label39, 49, 17);
  gtk_label_set_use_markup (GTK_LABEL (label39), TRUE);

  label40 = gtk_label_new (_("<b>L/m</b>"));
  gtk_widget_show (label40);
  gtk_fixed_put (GTK_FIXED (fixed8), label40, 720, 270);
  gtk_widget_set_size_request (label40, 49, 17);
  gtk_label_set_use_markup (GTK_LABEL (label40), TRUE);

  succesi = gtk_label_new (_("<span foreground=\"green\" ><b>L'\303\251l\303\251ment est modifi\303\251!</b></span>"));
  gtk_fixed_put (GTK_FIXED (fixed8), succesi, 700, 450);
  gtk_widget_set_size_request (succesi, 224, 41);
  gtk_label_set_use_markup (GTK_LABEL (succesi), TRUE);

  label35 = gtk_label_new (_("<span font_desc=\"Purisa\"foreground=\"purple\">Vous pouvez modifier les donn\303\251es ici: </span>"));
  gtk_widget_show (label35);
  gtk_fixed_put (GTK_FIXED (fixed8), label35, 690, 0);
  gtk_widget_set_size_request (label35, 350, 50);
  gtk_label_set_use_markup (GTK_LABEL (label35), TRUE);

  image6 = gtk_image_new_from_stock ("gtk-jump-to", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image6);
  gtk_fixed_put (GTK_FIXED (fixed8), image6, 670, 15);
  gtk_widget_set_size_request (image6, 40, 20);

  label45 = gtk_label_new ("");
  gtk_widget_show (label45);
  gtk_fixed_put (GTK_FIXED (fixed8), label45, 229, 16);
  gtk_widget_set_size_request (label45, 107, 17);

  supprimeri1 = gtk_button_new ();
  gtk_widget_show (supprimeri1);
  gtk_fixed_put (GTK_FIXED (fixed8), supprimeri1, 0, 472);
  gtk_widget_set_size_request (supprimeri1, 128, 45);

  alignment2 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment2);
  gtk_container_add (GTK_CONTAINER (supprimeri1), alignment2);

  hbox2 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox2);
  gtk_container_add (GTK_CONTAINER (alignment2), hbox2);

  image4 = gtk_image_new_from_stock ("gtk-delete", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image4);
  gtk_box_pack_start (GTK_BOX (hbox2), image4, FALSE, FALSE, 0);

  label43 = gtk_label_new_with_mnemonic (_("supprimer "));
  gtk_widget_show (label43);
  gtk_box_pack_start (GTK_BOX (hbox2), label43, FALSE, FALSE, 0);

  modifieri2 = gtk_button_new ();
  gtk_widget_show (modifieri2);
  gtk_fixed_put (GTK_FIXED (fixed8), modifieri2, 760, 380);
  gtk_widget_set_size_request (modifieri2, 112, 37);

  alignment3 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment3);
  gtk_container_add (GTK_CONTAINER (modifieri2), alignment3);

  hbox3 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox3);
  gtk_container_add (GTK_CONTAINER (alignment3), hbox3);

  image5 = gtk_image_new_from_stock ("gtk-find-and-replace", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image5);
  gtk_box_pack_start (GTK_BOX (hbox3), image5, FALSE, FALSE, 0);

  label44 = gtk_label_new_with_mnemonic (_("Modifier"));
  gtk_widget_show (label44);
  gtk_box_pack_start (GTK_BOX (hbox3), label44, FALSE, FALSE, 0);

  comboboxsexe2 = gtk_combo_box_entry_new_text ();
  gtk_widget_show (comboboxsexe2);
  gtk_fixed_put (GTK_FIXED (fixed8), comboboxsexe2, 784, 216);
  gtk_widget_set_size_request (comboboxsexe2, 189, 29);
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxsexe2), _("Masculin"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxsexe2), _("Feminin"));

  label55 = gtk_label_new (_("<span font_desc=\"Purisa\"foreground=\"#722F\"><b>Clickez sur le button pour modifier l'\303\251l\303\251ment:</b></span>"));
  gtk_widget_show (label55);
  gtk_fixed_put (GTK_FIXED (fixed6), label55, 816, 328);
  gtk_widget_set_size_request (label55, 424, 40);
  gtk_label_set_use_markup (GTK_LABEL (label55), TRUE);

  label56 = gtk_label_new (_("<span font_desc=\"Purisa\"foreground=\"#722F\"><b>Vous pouvez supprimer l'\303\251l\303\251ment en clickant sur ce boutton:</b></span>"));
  gtk_widget_show (label56);
  gtk_fixed_put (GTK_FIXED (fixed6), label56, 192, 440);
  gtk_widget_set_size_request (label56, 584, 40);
  gtk_label_set_use_markup (GTK_LABEL (label56), TRUE);

  fixed7 = gtk_fixed_new ();
  gtk_widget_show (fixed7);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook1), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook1), 1), fixed7);

  label42 = gtk_label_new (_("<span font_desc=\"Purisa\"foreground=\"purple\"><b>G\303\250rer vos troupeaux</b></span>"));
  gtk_widget_show (label42);
  gtk_fixed_put (GTK_FIXED (fixed7), label42, 0, 8);
  gtk_widget_set_size_request (label42, 240, 16);
  gtk_label_set_use_markup (GTK_LABEL (label42), TRUE);

  fixed9 = gtk_fixed_new ();
  gtk_widget_show (fixed9);
  gtk_container_add (GTK_CONTAINER (notebook1), fixed9);

  treeviewi2 = gtk_tree_view_new ();
  gtk_widget_show (treeviewi2);
  gtk_fixed_put (GTK_FIXED (fixed9), treeviewi2, 16, 16);
  gtk_widget_set_size_request (treeviewi2, 768, 336);

  entryidi2 = gtk_entry_new ();
  gtk_widget_show (entryidi2);
  gtk_fixed_put (GTK_FIXED (fixed9), entryidi2, 296, 456);
  gtk_widget_set_size_request (entryidi2, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entryidi2), 8226);

  label48 = gtk_label_new (_("<b>Identifiant:</b>"));
  gtk_widget_show (label48);
  gtk_fixed_put (GTK_FIXED (fixed9), label48, 112, 456);
  gtk_widget_set_size_request (label48, 160, 17);
  gtk_label_set_use_markup (GTK_LABEL (label48), TRUE);

  chercheri = gtk_button_new ();
  gtk_widget_show (chercheri);
  gtk_fixed_put (GTK_FIXED (fixed9), chercheri, 528, 432);
  gtk_widget_set_size_request (chercheri, 152, 64);

  alignment5 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment5);
  gtk_container_add (GTK_CONTAINER (chercheri), alignment5);

  hbox5 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox5);
  gtk_container_add (GTK_CONTAINER (alignment5), hbox5);

  image9 = gtk_image_new_from_stock ("gtk-find", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image9);
  gtk_box_pack_start (GTK_BOX (hbox5), image9, FALSE, FALSE, 0);

  label50 = gtk_label_new_with_mnemonic (_("chercher "));
  gtk_widget_show (label50);
  gtk_box_pack_start (GTK_BOX (hbox5), label50, FALSE, FALSE, 0);

  messageresi = gtk_label_new_with_mnemonic (_("<span foreground=\"purple\" ><b>Resultat</b></span>"));
  gtk_fixed_put (GTK_FIXED (fixed9), messageresi, 976, 152);
  gtk_widget_set_size_request (messageresi, 200, 33);
  gtk_label_set_use_markup (GTK_LABEL (messageresi), TRUE);

  nbi = gtk_label_new ("");
  gtk_widget_show (nbi);
  gtk_fixed_put (GTK_FIXED (fixed9), nbi, 936, 144);
  gtk_widget_set_size_request (nbi, 72, 65);

  calendar3 = gtk_calendar_new ();
  gtk_widget_show (calendar3);
  gtk_fixed_put (GTK_FIXED (fixed9), calendar3, 1000, 376);
  gtk_widget_set_size_request (calendar3, 260, 184);
  gtk_calendar_display_options (GTK_CALENDAR (calendar3),
                                GTK_CALENDAR_SHOW_HEADING
                                | GTK_CALENDAR_SHOW_DAY_NAMES);

  labelidi = gtk_label_new (_("<span font_desc=\"Purisa\"foreground=\"red\">veuillez saisir un nom! </span>"));
  gtk_fixed_put (GTK_FIXED (fixed9), labelidi, 696, 440);
  gtk_widget_set_size_request (labelidi, 280, 40);
  gtk_label_set_use_markup (GTK_LABEL (labelidi), TRUE);

  label47 = gtk_label_new (_("<span font_desc=\"Purisa\"foreground=\"purple\"><b>Chercher</b></span>"));
  gtk_widget_show (label47);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook1), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook1), 2), label47);
  gtk_label_set_use_markup (GTK_LABEL (label47), TRUE);

  fixed10 = gtk_fixed_new ();
  gtk_widget_show (fixed10);
  gtk_container_add (GTK_CONTAINER (notebook1), fixed10);

  mouton = gtk_radio_button_new_with_mnemonic (NULL, _("Mouton"));
  gtk_widget_show (mouton);
  gtk_fixed_put (GTK_FIXED (fixed10), mouton, 32, 96);
  gtk_widget_set_size_request (mouton, 192, 32);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (mouton), mouton_group);
  mouton_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (mouton));

  Brebi = gtk_radio_button_new_with_mnemonic (NULL, _("Brebi"));
  gtk_widget_show (Brebi);
  gtk_fixed_put (GTK_FIXED (fixed10), Brebi, 352, 96);
  gtk_widget_set_size_request (Brebi, 176, 32);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (Brebi), mouton_group);
  mouton_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (Brebi));

  taureau = gtk_radio_button_new_with_mnemonic (NULL, _("Taureau"));
  gtk_widget_show (taureau);
  gtk_fixed_put (GTK_FIXED (fixed10), taureau, 24, 168);
  gtk_widget_set_size_request (taureau, 136, 40);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (taureau), mouton_group);
  mouton_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (taureau));

  vache = gtk_radio_button_new_with_mnemonic (NULL, _("Vache"));
  gtk_widget_show (vache);
  gtk_fixed_put (GTK_FIXED (fixed10), vache, 344, 168);
  gtk_widget_set_size_request (vache, 144, 40);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (vache), mouton_group);
  mouton_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (vache));

  okka = gtk_button_new ();
  gtk_widget_show (okka);
  gtk_fixed_put (GTK_FIXED (fixed10), okka, 136, 280);
  gtk_widget_set_size_request (okka, 128, 48);

  alignment6 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment6);
  gtk_container_add (GTK_CONTAINER (okka), alignment6);

  hbox6 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox6);
  gtk_container_add (GTK_CONTAINER (alignment6), hbox6);

  image10 = gtk_image_new_from_stock ("gtk-apply", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image10);
  gtk_box_pack_start (GTK_BOX (hbox6), image10, FALSE, FALSE, 0);

  label54 = gtk_label_new_with_mnemonic (_("Valider"));
  gtk_widget_show (label54);
  gtk_box_pack_start (GTK_BOX (hbox6), label54, FALSE, FALSE, 0);

  calendar2 = gtk_calendar_new ();
  gtk_widget_show (calendar2);
  gtk_fixed_put (GTK_FIXED (fixed10), calendar2, 1000, 376);
  gtk_widget_set_size_request (calendar2, 260, 184);
  gtk_calendar_display_options (GTK_CALENDAR (calendar2),
                                GTK_CALENDAR_SHOW_HEADING
                                | GTK_CALENDAR_SHOW_DAY_NAMES);

  label53 = gtk_label_new (_("<span font_desc=\"Purisa\"foreground=\"red\"><b>Vous pouvez ici savoir le nombre de chaque type de troupeau: </b></span>"));
  gtk_widget_show (label53);
  gtk_fixed_put (GTK_FIXED (fixed10), label53, 8, 16);
  gtk_widget_set_size_request (label53, 592, 88);
  gtk_label_set_use_markup (GTK_LABEL (label53), TRUE);

  label52 = gtk_label_new (_("<span font_desc=\"Purisa\"foreground=\"#722F\"><b>Le nombre d'\303\251l\303\251ment de ce type:   </b></span>"));
  gtk_widget_show (label52);
  gtk_fixed_put (GTK_FIXED (fixed10), label52, 0, 336);
  gtk_widget_set_size_request (label52, 344, 72);
  gtk_label_set_use_markup (GTK_LABEL (label52), TRUE);

  nombret = gtk_label_new_with_mnemonic (_("<b></b>"));
  gtk_widget_show (nombret);
  gtk_fixed_put (GTK_FIXED (fixed10), nombret, 320, 352);
  gtk_widget_set_size_request (nombret, 96, 40);
  gtk_label_set_use_markup (GTK_LABEL (nombret), TRUE);

  label57 = gtk_label_new (_("<span font_desc=\"Purisa\"foreground=\"#722F\"><b>La production en litre \nType de ce : </b></span>"));
  gtk_widget_show (label57);
  gtk_fixed_put (GTK_FIXED (fixed10), label57, 512, 128);
  gtk_widget_set_size_request (label57, 344, 57);
  gtk_label_set_use_markup (GTK_LABEL (label57), TRUE);

  label58 = gtk_label_new (_("<b></b>"));
  gtk_widget_show (label58);
  gtk_fixed_put (GTK_FIXED (fixed10), label58, 808, 144);
  gtk_widget_set_size_request (label58, 113, 41);
  gtk_label_set_use_markup (GTK_LABEL (label58), TRUE);

  okkaka = gtk_button_new ();
  gtk_widget_show (okkaka);
  gtk_fixed_put (GTK_FIXED (fixed10), okkaka, 736, 216);
  gtk_widget_set_size_request (okkaka, 104, 48);

  alignment7 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment7);
  gtk_container_add (GTK_CONTAINER (okkaka), alignment7);

  hbox7 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox7);
  gtk_container_add (GTK_CONTAINER (alignment7), hbox7);

  image11 = gtk_image_new_from_stock ("gtk-goto-last", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image11);
  gtk_box_pack_start (GTK_BOX (hbox7), image11, FALSE, FALSE, 0);

  label59 = gtk_label_new_with_mnemonic (_("Suivre L/m"));
  gtk_widget_show (label59);
  gtk_box_pack_start (GTK_BOX (hbox7), label59, FALSE, FALSE, 0);

  label51 = gtk_label_new (_("<span font_desc=\"Purisa\"foreground=\"purple\"><b>Type</b></span>"));
  gtk_widget_show (label51);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook1), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook1), 3), label51);
  gtk_label_set_use_markup (GTK_LABEL (label51), TRUE);

  label1 = gtk_label_new (_("<span font_desc=\"Purisa\"foreground=\"purple\"><b>Espace de gestion des troupeaux vos troupeaux</b></span>"));
  gtk_widget_show (label1);
  gtk_fixed_put (GTK_FIXED (fixed1), label1, 288, 56);
  gtk_widget_set_size_request (label1, 712, 113);
  gtk_label_set_use_markup (GTK_LABEL (label1), TRUE);

  quitter = gtk_button_new ();
  gtk_widget_show (quitter);
  gtk_fixed_put (GTK_FIXED (fixed1), quitter, 1144, 184);
  gtk_widget_set_size_request (quitter, 152, 56);

  alignment4 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment4);
  gtk_container_add (GTK_CONTAINER (quitter), alignment4);

  hbox4 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox4);
  gtk_container_add (GTK_CONTAINER (alignment4), hbox4);

  image8 = gtk_image_new_from_stock ("gtk-undo", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image8);
  gtk_box_pack_start (GTK_BOX (hbox4), image8, FALSE, FALSE, 0);

  label49 = gtk_label_new_with_mnemonic (_("Retour au Menu\n principal"));
  gtk_widget_show (label49);
  gtk_box_pack_start (GTK_BOX (hbox4), label49, FALSE, FALSE, 0);

  g_signal_connect ((gpointer) ajouteri, "clicked",
                    G_CALLBACK (on_ajouteri_clicked),
                    NULL);
  g_signal_connect ((gpointer) treeviewi1, "row_activated",
                    G_CALLBACK (on_treeviewi_row_activated),
                    NULL);
  g_signal_connect ((gpointer) supprimeri1, "clicked",
                    G_CALLBACK (on_supprimeri1_clicked),
                    NULL);
  g_signal_connect ((gpointer) modifieri2, "clicked",
                    G_CALLBACK (on_modifieri1_clicked),
                    NULL);
  g_signal_connect ((gpointer) chercheri, "clicked",
                    G_CALLBACK (on_chercheri_clicked),
                    NULL);
  g_signal_connect ((gpointer) mouton, "toggled",
                    G_CALLBACK (on_mouton_toggled),
                    NULL);
  g_signal_connect ((gpointer) Brebi, "toggled",
                    G_CALLBACK (on_Brebi_toggled),
                    NULL);
  g_signal_connect ((gpointer) taureau, "toggled",
                    G_CALLBACK (on_taureau_toggled),
                    NULL);
  g_signal_connect ((gpointer) vache, "toggled",
                    G_CALLBACK (on_vache_toggled),
                    NULL);
  g_signal_connect ((gpointer) okka, "clicked",
                    G_CALLBACK (on_okka_clicked),
                    NULL);
  g_signal_connect ((gpointer) okkaka, "clicked",
                    G_CALLBACK (on_okkaka_clicked),
                    NULL);
  g_signal_connect ((gpointer) quitter, "clicked",
                    G_CALLBACK (on_quitter_clicked),
                    NULL);

  gtk_label_set_mnemonic_widget (GTK_LABEL (label36), entryidi1);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (window1, window1, "window1");
  GLADE_HOOKUP_OBJECT (window1, fixed1, "fixed1");
  GLADE_HOOKUP_OBJECT (window1, notebook1, "notebook1");
  GLADE_HOOKUP_OBJECT (window1, fixed2, "fixed2");
  GLADE_HOOKUP_OBJECT (window1, entryidi, "entryidi");
  GLADE_HOOKUP_OBJECT (window1, entrytypei, "entrytypei");
  GLADE_HOOKUP_OBJECT (window1, entrydateri, "entrydateri");
  GLADE_HOOKUP_OBJECT (window1, entrydateni, "entrydateni");
  GLADE_HOOKUP_OBJECT (window1, label5, "label5");
  GLADE_HOOKUP_OBJECT (window1, spinbutton, "spinbutton");
  GLADE_HOOKUP_OBJECT (window1, image2, "image2");
  GLADE_HOOKUP_OBJECT (window1, calendar1, "calendar1");
  GLADE_HOOKUP_OBJECT (window1, label4, "label4");
  GLADE_HOOKUP_OBJECT (window1, label3, "label3");
  GLADE_HOOKUP_OBJECT (window1, label8, "label8");
  GLADE_HOOKUP_OBJECT (window1, label9, "label9");
  GLADE_HOOKUP_OBJECT (window1, label6, "label6");
  GLADE_HOOKUP_OBJECT (window1, label2, "label2");
  GLADE_HOOKUP_OBJECT (window1, label7, "label7");
  GLADE_HOOKUP_OBJECT (window1, ajouteri, "ajouteri");
  GLADE_HOOKUP_OBJECT (window1, alignment1, "alignment1");
  GLADE_HOOKUP_OBJECT (window1, hbox1, "hbox1");
  GLADE_HOOKUP_OBJECT (window1, image3, "image3");
  GLADE_HOOKUP_OBJECT (window1, label12, "label12");
  GLADE_HOOKUP_OBJECT (window1, idi, "idi");
  GLADE_HOOKUP_OBJECT (window1, typei, "typei");
  GLADE_HOOKUP_OBJECT (window1, dateri, "dateri");
  GLADE_HOOKUP_OBJECT (window1, dateni, "dateni");
  GLADE_HOOKUP_OBJECT (window1, comboboxsexe, "comboboxsexe");
  GLADE_HOOKUP_OBJECT (window1, labelexiste, "labelexiste");
  GLADE_HOOKUP_OBJECT (window1, label11, "label11");
  GLADE_HOOKUP_OBJECT (window1, label17, "label17");
  GLADE_HOOKUP_OBJECT (window1, fixed6, "fixed6");
  GLADE_HOOKUP_OBJECT (window1, fixed8, "fixed8");
  GLADE_HOOKUP_OBJECT (window1, treeviewi1, "treeviewi1");
  GLADE_HOOKUP_OBJECT (window1, entryidi1, "entryidi1");
  GLADE_HOOKUP_OBJECT (window1, entrytypei1, "entrytypei1");
  GLADE_HOOKUP_OBJECT (window1, entrydateni1, "entrydateni1");
  GLADE_HOOKUP_OBJECT (window1, spinbutton2, "spinbutton2");
  GLADE_HOOKUP_OBJECT (window1, vseparator3, "vseparator3");
  GLADE_HOOKUP_OBJECT (window1, vseparator4, "vseparator4");
  GLADE_HOOKUP_OBJECT (window1, label36, "label36");
  GLADE_HOOKUP_OBJECT (window1, label37, "label37");
  GLADE_HOOKUP_OBJECT (window1, label38, "label38");
  GLADE_HOOKUP_OBJECT (window1, label39, "label39");
  GLADE_HOOKUP_OBJECT (window1, label40, "label40");
  GLADE_HOOKUP_OBJECT (window1, succesi, "succesi");
  GLADE_HOOKUP_OBJECT (window1, label35, "label35");
  GLADE_HOOKUP_OBJECT (window1, image6, "image6");
  GLADE_HOOKUP_OBJECT (window1, label45, "label45");
  GLADE_HOOKUP_OBJECT (window1, supprimeri1, "supprimeri1");
  GLADE_HOOKUP_OBJECT (window1, alignment2, "alignment2");
  GLADE_HOOKUP_OBJECT (window1, hbox2, "hbox2");
  GLADE_HOOKUP_OBJECT (window1, image4, "image4");
  GLADE_HOOKUP_OBJECT (window1, label43, "label43");
  GLADE_HOOKUP_OBJECT (window1, modifieri2, "modifieri2");
  GLADE_HOOKUP_OBJECT (window1, alignment3, "alignment3");
  GLADE_HOOKUP_OBJECT (window1, hbox3, "hbox3");
  GLADE_HOOKUP_OBJECT (window1, image5, "image5");
  GLADE_HOOKUP_OBJECT (window1, label44, "label44");
  GLADE_HOOKUP_OBJECT (window1, comboboxsexe2, "comboboxsexe2");
  GLADE_HOOKUP_OBJECT (window1, label55, "label55");
  GLADE_HOOKUP_OBJECT (window1, label56, "label56");
  GLADE_HOOKUP_OBJECT (window1, fixed7, "fixed7");
  GLADE_HOOKUP_OBJECT (window1, label42, "label42");
  GLADE_HOOKUP_OBJECT (window1, fixed9, "fixed9");
  GLADE_HOOKUP_OBJECT (window1, treeviewi2, "treeviewi2");
  GLADE_HOOKUP_OBJECT (window1, entryidi2, "entryidi2");
  GLADE_HOOKUP_OBJECT (window1, label48, "label48");
  GLADE_HOOKUP_OBJECT (window1, chercheri, "chercheri");
  GLADE_HOOKUP_OBJECT (window1, alignment5, "alignment5");
  GLADE_HOOKUP_OBJECT (window1, hbox5, "hbox5");
  GLADE_HOOKUP_OBJECT (window1, image9, "image9");
  GLADE_HOOKUP_OBJECT (window1, label50, "label50");
  GLADE_HOOKUP_OBJECT (window1, messageresi, "messageresi");
  GLADE_HOOKUP_OBJECT (window1, nbi, "nbi");
  GLADE_HOOKUP_OBJECT (window1, calendar3, "calendar3");
  GLADE_HOOKUP_OBJECT (window1, labelidi, "labelidi");
  GLADE_HOOKUP_OBJECT (window1, label47, "label47");
  GLADE_HOOKUP_OBJECT (window1, fixed10, "fixed10");
  GLADE_HOOKUP_OBJECT (window1, mouton, "mouton");
  GLADE_HOOKUP_OBJECT (window1, Brebi, "Brebi");
  GLADE_HOOKUP_OBJECT (window1, taureau, "taureau");
  GLADE_HOOKUP_OBJECT (window1, vache, "vache");
  GLADE_HOOKUP_OBJECT (window1, okka, "okka");
  GLADE_HOOKUP_OBJECT (window1, alignment6, "alignment6");
  GLADE_HOOKUP_OBJECT (window1, hbox6, "hbox6");
  GLADE_HOOKUP_OBJECT (window1, image10, "image10");
  GLADE_HOOKUP_OBJECT (window1, label54, "label54");
  GLADE_HOOKUP_OBJECT (window1, calendar2, "calendar2");
  GLADE_HOOKUP_OBJECT (window1, label53, "label53");
  GLADE_HOOKUP_OBJECT (window1, label52, "label52");
  GLADE_HOOKUP_OBJECT (window1, nombret, "nombret");
  GLADE_HOOKUP_OBJECT (window1, label57, "label57");
  GLADE_HOOKUP_OBJECT (window1, label58, "label58");
  GLADE_HOOKUP_OBJECT (window1, okkaka, "okkaka");
  GLADE_HOOKUP_OBJECT (window1, alignment7, "alignment7");
  GLADE_HOOKUP_OBJECT (window1, hbox7, "hbox7");
  GLADE_HOOKUP_OBJECT (window1, image11, "image11");
  GLADE_HOOKUP_OBJECT (window1, label59, "label59");
  GLADE_HOOKUP_OBJECT (window1, label51, "label51");
  GLADE_HOOKUP_OBJECT (window1, label1, "label1");
  GLADE_HOOKUP_OBJECT (window1, quitter, "quitter");
  GLADE_HOOKUP_OBJECT (window1, alignment4, "alignment4");
  GLADE_HOOKUP_OBJECT (window1, hbox4, "hbox4");
  GLADE_HOOKUP_OBJECT (window1, image8, "image8");
  GLADE_HOOKUP_OBJECT (window1, label49, "label49");

  return window1;
}

