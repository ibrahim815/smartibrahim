#include "ouvrier.h"
#include <stdio.h>
#include <gtk/gtk.h>
#include <string.h>
enum
 {
  ENOM,
  EPRENOM,
  EID,
  ESP,
  ETEL,
  COLUMNS,
  };

void ajouter(ouvrier c)
{
   
    FILE *fc=NULL;
    fc=fopen("infouvriers.txt","a+");
   
    fprintf(fc,"%s %s %s %s %s\n",c.nom,c.prenom,c.id,c.sp,c.tel);
fclose(fc);

}
void modifier(char id45[],ouvrier s)
{
  FILE *f;
    FILE *ftemp;
    ftemp=NULL;
    ouvrier c;
   
    f=fopen("infouvriers.txt","r+");
    ftemp=fopen("infouvriers.txt.temp","a+");
    if (f!=NULL)
    {
        while(fscanf(f,"%s %s %s %s %s\n",c.nom,c.prenom,c.id,c.sp,c.tel)!=EOF)
        {
            if(strcmp(id45,c.id)==0)
            {
      strcpy(c.id,s.id);
      strcpy(c.prenom,s.prenom);
      strcpy(c.nom,s.nom);
                       strcpy(c.sp,s.sp);
                       strcpy(c.tel,s.tel);
                  
            }
            fprintf(ftemp,"%s %s %s %s %s\n",c.nom,c.prenom,c.id,c.sp,c.tel);
        }

    }
    fclose(ftemp);
    fclose(f);
    remove("infouvriers.txt");
    rename("infouvriers.txt.temp","infouvriers.txt");
}

void supprimer(char idsupp[])
{
    FILE *f;
    FILE *ftemp;
    ftemp=NULL;
    f=NULL;
    ouvrier c;
    char id0[20];
    strcpy(id0,"sSs");
   
    f=fopen("infouvriers.txt","r+");
    ftemp=fopen("infouvriers.txt.temp","a+");
    if (f!=NULL)
    {
        while(fscanf(f,"%s %s %s %s %s\n",c.nom,c.prenom,c.id,c.sp,c.tel)!=EOF)
        {
            if(strcmp(idsupp,c.id)==0)
            {
                strcpy(c.id,id0);
     
            }
            if(strcmp(id0,c.id)!=0)
               {
                 fprintf(ftemp,"%s %s %s %s %s\n",c.nom,c.prenom,c.id,c.sp,c.tel);
               }
         }
    }
    fclose(ftemp);
    fclose(f);
    remove("infouvriers.txt");
    rename("infouvriers.txt.temp","infouvriers.txt");
}


ouvrier chercher(char idch[])
{
  FILE *f;
   
    ouvrier c;
   
   
    f=fopen("infouvriers.txt","r+");
   
    if (f!=NULL)
    {
        while(fscanf(f,"%s %s %s %s %s\n",c.nom,c.prenom,c.id,c.sp,c.tel)!=EOF)
        {
            if(strcmp(idch,c.id)==0)
            {
     return c;
            }
         
        }

    }
   
    fclose(f);
   
}

void afficher(GtkWidget *liste)
{
GtkCellRenderer *renderer;
GtkTreeViewColumn *column;
GtkTreeIter iter;
GtkListStore *store;

char nom[20];
char prenom[20];
char id[20];
char sp[20];
char tel[20];
store=NULL;


FILE *f;

store=gtk_tree_view_get_model(liste);


if(store==NULL)
{
renderer =gtk_cell_renderer_text_new();
column = gtk_tree_view_column_new_with_attributes("Nom",renderer, "text",ENOM,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);

renderer = gtk_cell_renderer_text_new();
column = gtk_tree_view_column_new_with_attributes("Prenom",renderer, "text",EPRENOM,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);

renderer = gtk_cell_renderer_text_new();
column = gtk_tree_view_column_new_with_attributes("identifiant",renderer, "text",EID,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);

renderer = gtk_cell_renderer_text_new();
column = gtk_tree_view_column_new_with_attributes("specialite",renderer, "text",ESP,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);

renderer = gtk_cell_renderer_text_new();
column = gtk_tree_view_column_new_with_attributes("numero de tel",renderer,"text",ETEL,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);
}
store=gtk_list_store_new(COLUMNS,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);

f = fopen("infouvriers.txt","r");
if(f==NULL)
{
  return;
}
else
{
 f=fopen("infouvriers.txt","a+");
while(fscanf(f,"%s %s %s %s %s\n",nom,prenom,id,sp,tel)!=EOF)
  {
    gtk_list_store_append (store,&iter);
gtk_list_store_set(store,&iter,ENOM,nom,EPRENOM,prenom,EID,id,ESP,sp,ETEL,tel, -1);
}
fclose(f);
gtk_tree_view_set_model(GTK_TREE_VIEW(liste), GTK_TREE_MODEL(store));
g_object_unref(store);
}

}



void afficherch(GtkWidget *liste,ouvrier ch)
{
GtkCellRenderer *renderer;
GtkTreeViewColumn *column;
GtkTreeIter iter;
GtkListStore *store;

char nom[20];
char prenom[20];
char id[20];
char sp[20];
char tel[20];
store=NULL;


FILE *f;

store=gtk_tree_view_get_model(liste);


if(store==NULL)
{
renderer =gtk_cell_renderer_text_new();
column = gtk_tree_view_column_new_with_attributes("Nom",renderer, "text",ENOM,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);

renderer = gtk_cell_renderer_text_new();
column = gtk_tree_view_column_new_with_attributes("Prenom",renderer, "text",EPRENOM,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);

renderer = gtk_cell_renderer_text_new();
column = gtk_tree_view_column_new_with_attributes("identifiant",renderer, "text",EID,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);

renderer = gtk_cell_renderer_text_new();
column = gtk_tree_view_column_new_with_attributes("specialite",renderer, "text",ESP,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);

renderer = gtk_cell_renderer_text_new();
column = gtk_tree_view_column_new_with_attributes("numero de tel",renderer, "text",ETEL,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);

}
store=gtk_list_store_new(COLUMNS,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);

f = fopen("infouvriers.txt","r");
if(f==NULL)
{
  return;
}
else
{
 f=fopen("infouvriers.txt","a+");
while(fscanf(f,"%s %s %s %s %s\n",nom,prenom,id,sp,tel)!=EOF)
  { if (strcmp(ch.id,id)==0)
     {
    gtk_list_store_append (store,&iter);
gtk_list_store_set(store,&iter,ENOM,nom,EPRENOM,prenom,EID,id,ESP,sp,ETEL,tel, -1);
     }
  }
fclose(f);
gtk_tree_view_set_model(GTK_TREE_VIEW(liste), GTK_TREE_MODEL(store));
g_object_unref(store);
}

}
int verif(char idver[])
{
  int x=0;

  FILE *f;
   
    ouvrier c;
   
   
    f=fopen("infouvriers.txt","r+");
   
    if (f!=NULL)
    {
        while(fscanf(f,"%s %s %s %s %s\n",c.nom,c.prenom,c.id,c.sp,c.tel)!=EOF)
        {
            if(strcmp(idver,c.id)==0)
              {
                      x=2;
     return x;
              }
                   

        }

    }
   
    fclose(f);
 return x;

}


void enregristrer_absence(ouvrier o)
{
  FILE *f;
 
f=fopen("absence.txt","a+");
if(f!=NULL)
{
      fprintf(f,"%s %s %s %s\n",o.d.jour,o.d.mois,o.d.anne,o.id);
}
fclose(f);
}

void afficherchab(GtkWidget *liste)
{
GtkCellRenderer *renderer;
GtkTreeViewColumn *column;
GtkTreeIter iter;
GtkListStore *store;

char nom[20];
char prenom[20];
char id[20];
char sp[20];
char tel[20];
store=NULL;


FILE *f;

store=gtk_tree_view_get_model(liste);


if(store==NULL)
{
renderer =gtk_cell_renderer_text_new();
column = gtk_tree_view_column_new_with_attributes("Jour",renderer, "text",ENOM,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);

renderer = gtk_cell_renderer_text_new();
column = gtk_tree_view_column_new_with_attributes("Mois",renderer, "text",EPRENOM,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);

renderer = gtk_cell_renderer_text_new();
column = gtk_tree_view_column_new_with_attributes("Anne",renderer, "text",EID,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);

renderer = gtk_cell_renderer_text_new();
column = gtk_tree_view_column_new_with_attributes("Id",renderer, "text",ESP,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);


}
store=gtk_list_store_new(4,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);

f = fopen("absence.txt","r");
if(f==NULL)
{
  return;
}
else
{
 f=fopen("absence.txt","a+");
while(fscanf(f,"%s %s %s %s\n",nom,prenom,id,sp)!=EOF)
  { 
     
    gtk_list_store_append (store,&iter);
gtk_list_store_set(store,&iter,ENOM,nom,EPRENOM,prenom,EID,id,ESP,sp,-1);
     
  }
fclose(f);
gtk_tree_view_set_model(GTK_TREE_VIEW(liste), GTK_TREE_MODEL(store));
g_object_unref(store);
}

}










