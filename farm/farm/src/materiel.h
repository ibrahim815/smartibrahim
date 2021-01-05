#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <gtk/gtk.h>
void codage(char ch[]);
void decodage(char ch[]);
int control(char id[],char nom[],char type[],char etat[],int quantite);
void ajoutermateriel(char id[],char nom[],char type[],char etat[],int quantite);
void affichermateriel(GtkWidget *liste);
int anneseche();
