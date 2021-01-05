#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <gtk/gtk.h>
#include <string.h>
#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "ouvrier.h"
char id45[20],idsupp[20],idch[20];
ouvrier c;

ouvrier s;


void
on_buttonc_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonu_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttontb_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *administrateur;
GtkWidget *Tableu_de_bord_;

  

  Tableu_de_bord_ = create_Tableu_de_bord_ ();
  gtk_widget_show (Tableu_de_bord_);
  //administrateur=lookup_widget(button,"administrateur");
  //gtk_widget_destroy (administrateur);
}


void
on_buttongca_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttongc_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonge_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttongcl_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttongt_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttongo_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{GtkWidget *Gestion_d_ouvriers;
GtkWidget *Tableu_de_bord_;
Gestion_d_ouvriers = create_Gestion_d_ouvriers ();
  gtk_widget_show (Gestion_d_ouvriers);

  Tableu_de_bord_=lookup_widget(button,"Tableu_de_bord_");
  gtk_widget_destroy (Tableu_de_bord_);
}


void
on_buttonajouti_clicked                (GtkButton       *button,
                                        gpointer         user_data)
{
 GtkWidget *nom1,*prenom1,*id1,*sp1,*tel1,*nom2,*prenom2,*id2,*sp2,*tel2;
    char nom[20],prenom[20],id[20],sp[20],te[20];
   
    int l=0;
       
    nom2 = lookup_widget(button, "labelnomaj") ;
    prenom2 = lookup_widget(button, "labelprenomaj") ;
    id2 = lookup_widget(button, "labelidentaj") ;
    sp2 = lookup_widget(button, "labelspecaj") ;
    tel2 = lookup_widget(button, "labeltelaj") ;




    nom1 = lookup_widget(button, "entrynomi") ;
    strcpy(c.nom,gtk_entry_get_text(GTK_ENTRY(nom1)));
    if(strcmp(c.nom,"")==0)
      {
         gtk_label_set_markup (GTK_LABEL (nom2), "<span font_desc='medium italic'foreground='red'> Case Nom Vide !</span>");
         l=1;
      }
    prenom1 = lookup_widget(button, "entryprenomi") ;
    strcpy(c.prenom,gtk_entry_get_text(GTK_ENTRY(prenom1)));
    if(strcmp(c.prenom,"")==0)
      {
         gtk_label_set_markup (GTK_LABEL (prenom2), "<span font_desc='medium italic'foreground='red'> Case Prenom Vide !</span>");
         l=1;
      }
    id1 = lookup_widget(button, "entryidentifianti") ;
    strcpy(c.id,gtk_entry_get_text(GTK_ENTRY(id1)));
   if(strcmp(c.id,"")==0)
      {
         gtk_label_set_markup (GTK_LABEL (id2), "<span font_desc='medium italic'foreground='red'> Case Identifiant Vide !</span>");
         l=1;
      }

    sp1 = lookup_widget(button, "entryspecialitei") ;
    strcpy(c.sp,gtk_entry_get_text(GTK_ENTRY(sp1)));
   if(strcmp(c.sp,"")==0)
      {
         gtk_label_set_markup (GTK_LABEL (sp2), "<span font_desc='medium italic'foreground='red'> Case Specialité Vide !</span>");
         l=1;
      }

    tel1 = lookup_widget(button, "entrynumrodetelephonei") ;
    strcpy(c.tel,gtk_entry_get_text(GTK_ENTRY(tel1)));
    if(strcmp(c.id,"")==0)
      {
         gtk_label_set_markup (GTK_LABEL (tel2), "<span font_desc='medium italic'foreground='red'> Case Num Tel Vide !</span>");
         l=1;
      }
   
    

if(l!=1)
{
 ajouter(c);
}
}


void
on_buttoninfoi_clicked                 (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *nom1,*nom2,*prenom1,*prenom2,*sp1,*sp2,*checkid1,*id1,*id2,*tel1,*tel2,*checkcid1,*checksp1,*idcheck1;
  GtkWidget *window3 ;
  int x=0;
  
  idcheck1 = lookup_widget(button, "labelCheckidModif2") ;
  gtk_label_set_text(GTK_LABEL(idcheck1),"");
  
  id2 = lookup_widget(button, "entryidentifianti1") ;
  strcpy(id45,gtk_entry_get_text(GTK_ENTRY(id2)));
  x=verif(id45);
 if(x==2)
   {
     
    c=chercher(id45);

    nom1 = lookup_widget(button, "entrynomi1") ;
    gtk_entry_set_text(GTK_ENTRY(nom1),c.nom);

    prenom1 = lookup_widget(button, "entryprenomi1") ;
    gtk_entry_set_text(GTK_ENTRY(prenom1),c.prenom);


    id1 = lookup_widget(button, "entryidentifiantimodi") ;
    gtk_entry_set_text(GTK_ENTRY(id1),c.id);

   
    sp1 = lookup_widget(button, "entryspecialitei1") ;
    gtk_entry_set_text(GTK_ENTRY(sp1),c.sp);

    tel1 = lookup_widget(button, "entrynumdeteli1") ;
    gtk_entry_set_text(GTK_ENTRY(tel1),c.tel);


   

    checkid1 = lookup_widget(button, "labelCheckidModif") ;
    checksp1 = lookup_widget(button, "labelCheckspModif") ;
    nom2 = lookup_widget(button, "labelCheckNomModif") ;
    prenom2 = lookup_widget(button, "labelCheckPreomModif") ;

    tel2 = lookup_widget(button, "labelCheckTelModif") ;
    
    gtk_label_set_text(GTK_LABEL(nom2)," ");
    gtk_label_set_text(GTK_LABEL(tel2)," ");
    
   
    gtk_label_set_text(GTK_LABEL(prenom2)," ");
    gtk_label_set_text(GTK_LABEL(checkid1)," ");
    gtk_label_set_text(GTK_LABEL(checksp1)," ");
    
   }
  else
   {
     idcheck1 = lookup_widget(button, "labelCheckidModif2") ;
     gtk_label_set_text(GTK_LABEL(idcheck1),"id INEXISTANT");
   }
 

}


void
on_buttonsupprimeri_clicked            (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *id2;

  id2 = lookup_widget(button, "entryidsupp") ;
  strcpy(idsupp,gtk_entry_get_text(GTK_ENTRY(id2)));
 
  supprimer(idsupp);

}


void
on_buttonchercheri_clicked             (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *treeview1;
  GtkWidget *id2;
  ouvrier ch;
 
  id2 = lookup_widget(button, "entryidentifianti2") ;
  strcpy(idch,gtk_entry_get_text(GTK_ENTRY(id2)));
  ch=chercher(idch);

 
 treeview1 = lookup_widget(button, "treeview2") ;
 
  afficherch(treeview1,ch);

}


void
on_buttonconfirmeri_clicked            (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *id1,*jour1,*mois1,*annee1;

ouvrier o;

id1=lookup_widget(button,"entryidentifianti3");
jour1=lookup_widget(button,"comboboxentryjour3");
mois1=lookup_widget(button,"comboboxentrymois3");
annee1=lookup_widget(button,"comboboxentryannee3");
strcpy(o.id,gtk_entry_get_text(GTK_ENTRY(id1)));
gchar *anne=gtk_combo_box_get_active_text(annee1);
gchar *mois=gtk_combo_box_get_active_text(mois1);
gchar *jour=gtk_combo_box_get_active_text(jour1);
strcpy(o.d.jour,jour);
strcpy(o.d.mois,mois);
strcpy(o.d.anne,anne);


enregristrer_absence (o);
}


void
on_buttonaffichsupp_clicked            (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *treeview1;
  treeview1 = lookup_widget(button, "treeview1") ;
 
  afficher(treeview1);

}


void
on_buttonmodifieri_clicked             (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *nom1,*prenom1,*id1,*sp1,*tel1;
    char nom[20],prenom[20],id[20],sp[20],tel[20];
   
 
   
    nom1 = lookup_widget(button, "entrynomi1") ;
    strcpy(s.nom,gtk_entry_get_text(GTK_ENTRY(nom1)));

    prenom1 = lookup_widget(button, "entryprenomi1") ;
    strcpy(s.prenom,gtk_entry_get_text(GTK_ENTRY(prenom1)));

    id1 = lookup_widget(button, "entryidentifiantimodi") ;
    strcpy(s.id,gtk_entry_get_text(GTK_ENTRY(id1)));
    

    sp1 = lookup_widget(button, "entryspecialitei1") ;
    strcpy(s.sp,gtk_entry_get_text(GTK_ENTRY(sp1)));
    

    tel1 = lookup_widget(button, "entrynumdeteli1") ;
    strcpy(s.tel,gtk_entry_get_text(GTK_ENTRY(tel1)));

    

  
    modifier(id45,s);

}


void
on_treeview1_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
GtkTreeIter iter;
  gchar* nom;
  gchar* prenom;
  gchar* id;
  gchar* sp;
  gchar* tel;

 



   GtkTreeModel *model = gtk_tree_view_get_model(treeview);
   if(gtk_tree_model_get_iter(model, &iter, path))
     {
         gtk_tree_model_get (GTK_LIST_STORE(model),&iter,0,&nom,1,&prenom,2,&id,3,&sp,4,tel,-1);
  
     
                       
                       supprimer(id);
                       afficher(treeview);


}

}
void
on_treeview2_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{

}


void
on_buttonAffichecherch_clicked         (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *treeview2;
  treeview2 = lookup_widget(button, "treeview2") ;
 
  afficher(treeview2);
}


void
on_buttonre_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{GtkWidget *Gestion_d_ouvriers;
GtkWidget *Tableu_de_bord_;

  

  Tableu_de_bord_ = create_Tableu_de_bord_ ();
  gtk_widget_show (Tableu_de_bord_);
  Gestion_d_ouvriers=lookup_widget(button,"Gestion_d_ouvriers");
  gtk_widget_destroy (Gestion_d_ouvriers);
}


void
on_buttonretourchercher_clicked        (GtkButton       *button,
                                        gpointer         user_data)
{GtkNotebook *notebook1;
  notebook1=lookup_widget(button, "notebook1");
  gtk_notebook_set_current_page (notebook1,0);
}


void
on_buttonafficherab_clicked            (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *treeview3;
  treeview3 = lookup_widget(button, "treeview3") ;
 
  afficherchab(treeview3);
}


void
on_buttonibret_enter                   (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *administrateur;
GtkWidget *Tableu_de_bord_;

  

  administrateur = create_administrateur ();
  gtk_widget_show (administrateur);
  Tableu_de_bord_=lookup_widget(button,"Tableu_de_bord_");
  gtk_widget_destroy (Tableu_de_bord_);

}


void
on_buttonretoutadib12_clicked          (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *administrateur;
GtkWidget *authentification;

  

  authentification = create_authentification ();
  gtk_widget_show (authentification);
  authentification=lookup_widget(button,"authentification");
  gtk_widget_destroy (authentification);

}

