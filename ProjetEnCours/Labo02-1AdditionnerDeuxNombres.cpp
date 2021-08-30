// But : Ecrire un programme qui demande deux nombres entiers � l'utilisateur, qui calcule la 
// somme des deux nombres et affiche le r�sultat � l'�cran 
// Auteur : Karine Moreau
// Date : 2021-08-30

#include <iostream>	// Coffre � outils pour communiquer avec l'utilisateur (cout pour afficher � l'�cran)

void main()			// Fonction principale sans param�tre entre () et retourne rien (void)
{					// Ouverture du bloc d'instructions
	// On a besoin de 2 espaces dans la m�moire vive pour enregistrer les deux nombres
	// Il faut d�clarer deux variables : il faut 2 informations
	// 1. quel genre d'information on veut stocker : 
	//			Texte (string 15 octets), un seul caract�re (char = 1octet), un nombre entier(int 4 octets), 
	//			un nombre d�cimal(float 4octets, double 10 octets), bool�en(bool 1 octet)
	// 2. On doit donner un nom � la variable : ne commence par un chiffre, n'a pas d'espace
	//			commence par une minuscule, pas de caract�re accentu�, le deuxi�me mot commence par une majuscule	

	int premierNombre;
	int deuxiemeNombre;
	int resultat;

	// Pour afficher correctement les accents
	setlocale(LC_ALL, "");
	
	std::cout << "Veuillez entrer un nombre entier :";
	std::cin >> premierNombre;
	// On v�rifie la valeur contenue dans la variable
	//std::cout << premierNombre;

	std::cout << "Veuillez entrer un deuxi�me nombre entier :";
	std::cin >> deuxiemeNombre;
	//std::cout << deuxiemeNombre;

	// On fait la somme des deux nombres et on enregistre dans la variable r�sultat
	// ATTENTION : l'op�ration est � droite du = et la destination est � 
	resultat = premierNombre + deuxiemeNombre;

	// On doit afficher � l'�cran le contenu de resultat
	std::cout << premierNombre << "+" << deuxiemeNombre << "=" << resultat;

}

