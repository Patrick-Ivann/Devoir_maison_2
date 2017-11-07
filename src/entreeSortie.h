#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Constante - Taille du tableau de caractères pour la lecture des mots
#define TAILLE 100

// Lecture du fichier contenant les Dates à tester
// tableauDatesRetour (IN/OUT) - tableau de pointeurs vers de chaînes de caractères
void lireFichierDates(char **tableauDatesRetour);


// Ecrit le mot dans le fichier avec le flag OK ou KO
// f (IN) - code de retour : 0 le mot est valide; 1 le mot est non valide (=erreur ou non reconnu par l'automate)
// cdr (IN) - code de retour : 0 le mot est valide, écrire OK; 1 le mot est non valide (=erreur ou non reconnu par l'automate), écrire KO
// mot (IN) - mot analysé
//
// La ligne dans le fichier doit être écrite une par ligne comme ça :
// date OK\n (pour une date valide)
// date KO\n  (pour une date NON valide)
void ecrireResultat(FILE *f,short cdr, char *mot);
