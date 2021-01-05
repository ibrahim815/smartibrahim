#ifndef FONCTIONS_H_
#define FONCTIONS_H_
#include <gtk/gtk.h>

typedef struct
{
  char jour[5],mois[5],anne[7];
}date;



struct ouvrier
{
   char nom[20],prenom[20],id[20],sp[20],tel[20];
   date d;
};
typedef struct ouvrier ouvrier;

void ajouter(ouvrier c);
void modifier(char id45[],ouvrier s);
void supprimer(char idsupp[]);
ouvrier chercher(char idch[]);
void afficher(GtkWidget *liste);
void afficherch(GtkWidget *liste,ouvrier ch);
int verif(char idver[]);
void enregristrer_absence(ouvrier o);
void afficherchab(GtkWidget *liste);
#endif
