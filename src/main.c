/*******************************************************
Nom ......... : main.c
Role ........ : automate v�rifiant les formats des heures
                pour les types du langage C
Auteur ...... : Origo Patrick-Ivann & Lea Batlle-Font

Compilation :
Running gcc -Wno-vla -Wall -ansi -Wpedantic main.c -o Devoir_maison_2.exe && start cmd /k Devoir_maison_2

********************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "actions.h"
#include "entreeSortie.h"

// Fonction principale main
// argc - nombre d'arguments pass�s dans argv
// argv - tableau d'arguments pass�s lors du lancement du programme ex�cutable

// "Automate de lecture des heures\n"
// "Format disponible : hh:mm:ss -> hh de 00-23, mm et ss de 00-59\n"

int main(int argc, char *argv[])
{
    int i = 0; // compteur pour la boucle
    struct lTransitions *automate[NBETATS]; // Tableau de pointeurs vers listes des transitions d'�tat
    int etatInitial, etatFinal; // variables que contiendront l'�tat initial et final de l'automate - lues dans le fichier
    short cdr; // code de retour
    char *tableHeuresTests[NBTEST]; // tableau de heures
    FILE *fout = NULL; // fichier r�sultat des tests


    // TODO : Initialiser tous les �l�ments de la tableau 'automate' � NULL
    for (i = 0; i < argc; i++){
        automate [i] = NULL;
    }
    // TODO : Initialiser tous les �l�ments de la tableau de test 'tableHeuresTests' � NULL
    for (i = 0; i < NBTEST; i++){
        tableHeuresTests [i] = NULL;
    }
    // TODO : Lecture du fichier "automate.txt" (utiliser les fonctions d�j� d�finies)
    lireFichier(*&automate, &etatInitial, &etatFinal);
    // TODO : Lire fichier de donn�es de test "HeuresTests.txt" (utiliser les fonctions d�j� d�finies)
    lireFichierDates(argv);
    // Ouvrir le fichier de r�sultats en �criture
    fout = fopen("./ResultatsHeuresTests.txt", "w");
    printf("\n\n\n");
    // TODO : V�rifier si le fichier a bien �t� ouvert. Sinon, envoyer une erreur et sortir du programme
    if (fout == NULL){
        printf("Erreur, impossible d'ouvrir le fichier\n");
        exit (EXIT_FAILURE);
    }
    // TODO : Initialiser la lecture du tableau de heures de tests

    while (i < 100){
         cdr = analyse(*tableHeuresTests, *&automate, etatInitial, etatFinal);
       // TODO - Analyser ce mot avec l'automate (faire appel � des fonctions d�j� d�finies)
        ecrireResultat(fout, cdr, *tableHeuresTests);
        i++;
       // TODO - Ecrire le r�sultat de l'analyse dans le fichier r�sultats (faire appel � des fonctions d�j� d�finies)
    }
    libererTransitions(automate);
    // TODO - Lib�rer les transitions, qui sont les structures dynamiques de l'automate (faire appel � des fonctions d�j� d�finies)
    fclose(fout);
    // TODO : Fermer le fichier de r�sultats

    return 0;
}



