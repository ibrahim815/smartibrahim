#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"materiel.h"
void codage(char ch[])
{
int i,n;
n=strlen(ch);
for(i=0;i<n;i++)
{
if(ch[i]==' ')
{ch[i]='.';}
}
}
int anneseche()
{
    FILE *f=NULL;
    
    int n1,n2,n3,annee;
    float hum;
    int t[90000];
    int i=0,x=0,j=1,min=0;
    int n[20];
    int anne[20];
    float somm[20];
    float moy[20];

    f=fopen("humid.txt","r");
if(f!=NULL)
      {
         while(fscanf(f,"%d %d %d %d %f\n",&n1,&n2,&n3,&annee,&hum)!=NULL)
            {
               t[i]=annee;
            i++;
            }
      i=0;
fclose(f);
 f=fopen("humid.txt","r");

         while(fscanf(f,"%d %d %d %d %f\n",&n1,&n2,&n3,&annee,&hum)!=NULL)
            {

               if (t[i]!=t[i+1])
                 {   anne[x]=annee;
                     n[x]=j;
                     x++;

                    j=1;

                 }
               else
                 {
                   j++;
                 }
              somm[x]+=hum;

              i++;
             }
    }
      fclose(f);

     for(i=0;i<x;i++)
     {
        moy[i]=(somm[i]/n[i]);

     }
       for (i=0;i<x;i++)
        {
         if(moy[i]<moy[min])
          {
            min=i;
          }
        }
     
return anne[min];

}


void decodage(char ch[])
{
int i,n;
n=strlen(ch);
for(i=0;i<n;i++)
{
if(ch[i]=='.')
{ch[i]=' ';}
}
}

int control(char id[],char nom[],char type[],char etat[],int quantite)
{
int i,x;
int y;
			y=1;
x=strlen(nom);
if(x<3)
{y=0;}
x=strlen(id);
if(x<3)
{y=0;}
x=strlen(type);
if(x<3)
{y=0;}
x=strlen(etat);
if(x<3)
{y=0;}
return y;
}

void ajoutermateriel(char id[],char nom[],char type[],char etat[],int quantite)
{
	FILE *f;


f=fopen("materiel.txt","a+");
codage(nom);
fprintf(f,"%s %s %s %s %d\n",id,nom,type,etat,quantite);
fclose(f);
}

void affichermateriel(GtkWidget *liste)
{
enum
{
	ID,
	NOM,
	TYPE,
	ETAT,
	QUANTITE,
	COLUMNS
};
GtkCellRenderer *renderer;
GtkTreeViewColumn *column;
GtkTreeIter iter;
GtkListStore *store;


char id[50];
char nom [50];
char type[50];
char etat[50];
char quantite[50];
store =NULL;

FILE *f;

store=gtk_tree_view_get_model(liste);
if(store==NULL)
{
	
	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes("id",renderer,"text",ID,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes("nom",renderer,"text",NOM,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
	
	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes("type",renderer,"text",TYPE,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW (liste),column);
	
	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes("etat",renderer,"text",ETAT,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
	
	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes("quantite",renderer,"text",QUANTITE,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);



	store=gtk_list_store_new(COLUMNS,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);

	f=fopen("materiel.txt","r");

	if(f==NULL)
	{
		return;
	}
	else
	
	{ 
	f=fopen("materiel.txt","a+");
		while(fscanf(f,"%s %s %s %s %s\n",id,nom,type,etat,quantite)!=EOF)
		{
			decodage(nom);
			
			gtk_list_store_append(store,&iter);
			gtk_list_store_set(store,&iter,ID,id,NOM,nom,TYPE,type,ETAT,etat,QUANTITE,quantite,-1);
		}
	   fclose(f);
	gtk_tree_view_set_model(GTK_TREE_VIEW(liste),GTK_TREE_MODEL(store));
	g_object_unref(store);
	}
}
}

