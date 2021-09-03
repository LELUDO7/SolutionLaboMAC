// But : Le programme demande deux nombres ENTIERS pour chaque op�rateur arithm�tique 
// (+ - * / % modulo), calcule le r�sultat et l'affiche � l'�cran
// Auteur : Karine Moreau
// Date : 2021-08-31

#include <iostream>

void main()
{
	// KM : D�claration des variables
	int nb1;
	int nb2;
	int operation;
	int resteDivisionEntiere;

	// FR : Demander � l'utilisateur de taper deux nombre
	std::cout << "Veuillez entrer un nombre entier : ";
	std::cin >> nb1;

	std::cout << "Veuillez entrer un nombre entier : ";
	std::cin >> nb2;

	// Calculer la somme des deux nombres
	operation = nb1 + nb2;

	// Afficher le r�sultat et passer � la ligne : \ est un caract�re d'�chappement, 
	// le caract�re suivant ne sera affich� � l'�cran, mais sera interpr�t� : n =>new line t => tabulation a => alarme
	std::cout << nb1 << " + " << nb2 << " = " << operation << "\n";

	// Demander � l'utilisateur de taper deux nombres
	std::cout << "Veuillez entrer un nombre entier : ";
	std::cin >> nb1;

	std::cout << "Veuillez entrer un nombre entier : ";
	std::cin >> nb2;

	// Calculer la soustraction des deux nombres
	operation = nb1 - nb2;

	// Afficher le r�sultat
	std::cout << nb1 << "\t-\t" << nb2 << "\t=\t" << operation << "\n";

	// Demander � l'utilisateur de taper deux nombres
	std::cout << "Veuillez entrer un nombre entier : ";
	std::cin >> nb1;

	std::cout << "Veuillez entrer un nombre entier : ";
	std::cin >> nb2;

	// Calculer la multiplication des deux nombres
	operation = nb1 * nb2;

	// Afficher le r�sultat
	std::cout << nb1 << "\t*\t" << nb2 << "\t=\t" << operation << "\n";

	// Demander � l'utilisateur de taper deux nombres
	std::cout << "Veuillez entrer un nombre entier : ";
	std::cin >> nb1;

	std::cout << "Veuillez entrer un nombre entier : ";
	std::cin >> nb2;

	// TODO : Calculer la division des deux nombres
	// Si nb2 est diff�rent de z�ro on peut faire la division, sinon on affiche un message d'erreur
	if (nb2 !=0)
	{
		operation = nb1 / nb2;
		// Calculer le reste de la division
		resteDivisionEntiere = nb1 % nb2;

		// Afficher le r�sultat en utilisant le endl pour end line
		std::cout << nb1 << "\t/\t" << nb2 << "\t=\t" << operation << " reste " << resteDivisionEntiere << std::endl ;

	}
	else
	{
		std::cout << "erreur : division par z�ro" << std::endl;
	}



}




