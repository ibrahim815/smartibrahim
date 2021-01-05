#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include"materiel.h"


/*void
on_button6_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *nom1,*type1,*etat1,*ID1,*quantite1;
    char nom[20],type[20],etat[30],ID[50] ;
int quantite[];
   
    GtkButton *ajouter;
   

    nom1 = lookup_widget(button, "entryNom") ;
    strcpy(c.nom,gtk_entry_get_text(GTK_ENTRY(nom1)));

    etat1 = lookup_widget(button, "entryetat") ;
    strcpy(c.etat,gtk_entry_get_text(GTK_ENTRY(etat1)));

    ID = lookup_widget(button, "entryID") ;
    strcpy(c.ID,gtk_entry_get_text(GTK_ENTRY(ID1)));
    //ID=atol(ID2);

    etat = lookup_widget(button, "entryetat") ;
    strcpy(c.etatl,gtk_entry_get_text(GTK_ENTRY(etat1)));
    //etat=atol(etat2);

    type1 = lookup_widget(button, "entrytype") ;
    strcpy(c.type,gtk_entry_get_text(GTK_ENTRY(type1)));

    quantite1 = lookup_widget(button, "entryquantite") ;
    strcpy(c.quantite,gtk_entry_get_text(GTK_ENTRY(quantite1)));

   ajouter(c);


}

*/


void on_affichage_clicked                   (GtkWidget	*objet,
                                        gpointer         user_data)
{
GtkWidget *treeview1;

treeview1=lookup_widget(objet,"treemateriel");

affichermateriel(treeview1);

}


void
on_enregistrermodification_clicked     (GtkWidget	*objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *input1,*input2,*input3,*input4,*input5,*input6,*output;int i=0;
char email[50];
char id[50];
char nom [50];
char type[50];
char etat[50];
int quantite;
char bemail[50];
char bid[50];
char bnom [50];
char btype[50];
char betat[50];
int bquantite;
char idr[50];
char msg[500];
input1=lookup_widget(objet_graphique,"identry");
input2=lookup_widget(objet_graphique,"nomentry");
input3=lookup_widget(objet_graphique,"typeentry");
input4=lookup_widget(objet_graphique,"etatentry");
input5=lookup_widget(objet_graphique,"quantiteentry");
input6=lookup_widget(objet_graphique,"entry17");
quantite=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(input5));
output=lookup_widget(objet_graphique,"message");
strcpy(idr,gtk_entry_get_text(GTK_ENTRY(input6)));
strcpy(id,gtk_entry_get_text(GTK_ENTRY(input1)));
strcpy(nom,gtk_entry_get_text(GTK_ENTRY(input2)));
strcpy(type,gtk_entry_get_text(GTK_ENTRY(input3)));
strcpy(etat,gtk_entry_get_text(GTK_ENTRY(input4)));


FILE *f,*g;
f=fopen("materiel.txt","r");
g=fopen("materiel1.txt","a+");
if(f!=NULL)
{
	while(fscanf(f,"%s %s %s %s %d\n",bid,bnom,btype,betat,&bquantite)!=EOF)
	{
		if(strcmp(bid,idr)==0)
		{
			fprintf(g,"%s %s %s %s %d\n",id,nom,type,etat,quantite);
		}
		else {fprintf(g,"%s %s %s %s %d\n",bid,bnom,btype,betat,bquantite);}
	}
}
fclose(f);
fclose(g);
remove("materiel.txt");
rename("materiel1.txt","materiel.txt");
strcpy(msg,"materiel modifier");
gtk_label_set_text(GTK_LABEL(output),msg);
}


void
on_ajouter_clicked                     (GtkWidget	*objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *input1,*input2,*input3,*input4,*input5,*output;
char id[50];
char nom [50];
char type[50];
char etat[50];
int quantite;
input1=lookup_widget(objet_graphique,"identry");
input2=lookup_widget(objet_graphique,"nomentry");
input3=lookup_widget(objet_graphique,"typeentry");
input4=lookup_widget(objet_graphique,"etatentry");
input5=lookup_widget(objet_graphique,"quantiteentry");
quantite=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(input5));
output=lookup_widget(objet_graphique,"message");
strcpy(id,gtk_entry_get_text(GTK_ENTRY(input1)));
strcpy(nom,gtk_entry_get_text(GTK_ENTRY(input2)));
strcpy(type,gtk_entry_get_text(GTK_ENTRY(input3)));
strcpy(etat,gtk_entry_get_text(GTK_ENTRY(input4)));


int i;
char msg[100];
i=control(id,nom,type,etat,quantite);
if(i==0)
{
strcpy(msg,"verifier votre donnees !!");
gtk_label_set_text(GTK_LABEL(output),msg);
}
else
{ 
ajoutermateriel(id,nom,type,etat,quantite);
strcpy(msg,"materiel ajoutee");
gtk_label_set_text(GTK_LABEL(output),msg);
}

}


void
on_modifier_clicked                    (GtkWidget	*objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *input1,*input2,*input3,*input4,*input5,*input6,*output;int i=0;
char id[50];
char nom [50];
char type[50];
char etat[50];
int quantite;
char idr[50];
input1=lookup_widget(objet_graphique,"identry");
input2=lookup_widget(objet_graphique,"nomentry");
input3=lookup_widget(objet_graphique,"typeentry");
input4=lookup_widget(objet_graphique,"etatentry");
input5=lookup_widget(objet_graphique,"quantiteentry");
input6=lookup_widget(objet_graphique,"entry17");
output=lookup_widget(objet_graphique,"message");
strcpy(idr,gtk_entry_get_text(GTK_ENTRY(input6)));
FILE *f;
f=fopen("materiel.txt","r");
if(f!=NULL)
	{
		while((fscanf(f,"%s %s %s %s %d\n",id,nom,type,etat,&quantite)!=EOF)&&(strcmp(id,idr)!=0))
		{
		
			i=1;
			
		}
	}
fclose(f);

			gtk_entry_set_text(GTK_ENTRY(input1),_(id));
			gtk_entry_set_text(GTK_ENTRY(input2),_(nom));
			gtk_entry_set_text(GTK_ENTRY(input3),_(type));
			gtk_entry_set_text(GTK_ENTRY(input4),_(etat));
}


void
on_supprimer_clicked                    (GtkWidget	*objet,
                                        gpointer         user_data)
{
GtkWidget *input1,*output;int i=0;
char idr[50];
char id[50];
char nom [50];
char type[50];
char etat[50];
int quantite;
input1=lookup_widget(objet,"entry17");
output=lookup_widget(objet,"message");
strcpy(idr,gtk_entry_get_text(GTK_ENTRY(input1)));
FILE *f,*g;
f=fopen("materiel.txt","r");
g=fopen("materiel1.txt","a+");
if(f!=NULL)
{
	while(fscanf(f,"%s %s %s %s %d\n",id,nom,type,etat,&quantite)!=EOF)
	{
		if(strcmp(id,idr)!=0)
		{
			fprintf(g,"%s %s %s %s %d\n",id,nom,type,etat,quantite);
		}
		else {i=1;}
	}
}
fclose(f);
fclose(g);
remove("materiel.txt");
rename("materiel1.txt","materiel.txt");
if(i==0)
{gtk_label_set_text(GTK_LABEL(output),"verifier l id du materiel");}
else
{gtk_label_set_text(GTK_LABEL(output),"materiel supprimer");}
}


void
on_refresh_clicked                     (GtkWidget	*objet,
                                        gpointer         user_data)
{
GtkWidget *windowmateriel;
windowmateriel=lookup_widget(objet,"windowmateriel");
gtk_widget_destroy (windowmateriel);
windowmateriel = create_windowmateriel ();
  gtk_widget_show (windowmateriel);
}


void
on_button1_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttondaliaffiche_clicked           (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *ansech1;
    gchar *str;  
    int a;
    a=anneseche();
    str = g_strdup_printf ("%d",a);
    ansech1 = lookup_widget(button,"textviewAnseche") ;
    gtk_label_set_text(GTK_LABEL(ansech1),str);
    g_free (str);
}


