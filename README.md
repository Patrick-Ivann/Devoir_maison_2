# Devoir_maison_2 Implémentation d'un automate permettant de verifier des formats de dates et d'heures en C 

entreeSortie.h

	void lireFichierDates(char **tableauDatesRetour)
		Declaration de la fonction avec comme argument un pointeur de pointeur vers le tableauDatesRetour
	void ecrireResultat(FILE *f,short cdr, char*mot)
			Déclaration de la fonction avec comme argument un pointeur , un code de retour ok ou ko en passant par la variable  cdr, 
			un pointeur mot qui va pointer sur le mot lu
	
action.h


	void lireFichier(struct lTransitions **automate, int *etatInitial, int *etatFInal);
		declaration de la fonction qui permet de lire le fichier automate.txt , prend en parametres un pointeur de pointeur sur automates, un 		entier  pour l'adresse de l'etatinital et un entier de l'adresse de l'etatFinal.
	
	short analyse(char *mot,struct lTransitions **automate, int etatInitial,int etatFinal);
		delcaration de la fonction qui analyse le mot passé en parametre pour ainsi en déduire si il est ok (1) ou ko , prend en parametre un 		pointeur mot qui pointe sur le mot lu, pointeur de pointeur vers automate, un entier pour l'etat final et un pour l'etat intial
		
	void libererTransitions(structlTransitions **automate);
		fonction qui vide la liste chainée apres utilisation prend en parametre un pointeur de pointeur sur automate
		
		
Résultat console 
	
	
		1:1:1
 
		12:58:41
 
		04:06:21
 
		23:59:59
 
		00:00:00
 
		0:15:46
 
		21:0:57
 
		24:15:15
 
		17:60:34
 
		9:35:68
 
		12:12-12
 
		161:12:12
 
		13:56:51:01
 
		s1:12:12 
		


		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

		(null) KO

