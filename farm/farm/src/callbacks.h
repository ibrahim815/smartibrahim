#include <gtk/gtk.h>


void on_affichage_clicked                   (GtkWidget	*objet,
                                        gpointer         user_data);

void
on_enregistrermodification_clicked     (GtkWidget	*objet_graphique,
                                        gpointer         user_data);

void
on_ajouter_clicked                     (GtkWidget	*objet_graphique,
                                        gpointer         user_data);

void
on_modifier_clicked                    (GtkWidget	*objet_graphique,
                                        gpointer         user_data);

void
on_supprimer_clicked                    (GtkWidget	*objet,
                                        gpointer         user_data);


void
on_refresh_clicked                     (GtkWidget	*objet,
                                        gpointer         user_data);

void
on_button1_clicked                     (GtkButton       *button,
                                        gpointer         user_data);

void
on_buttondaliaffiche_clicked           (GtkButton       *button,
                                        gpointer         user_data);
