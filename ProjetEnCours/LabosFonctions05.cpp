#include "LabosFonctions05.h"
double CalculerMax(double valeur1, double valeur2, double valeur3)
{
  //D�clarer variables pour le r�sultat et non les donn�es fournies par l'utilisateur
	double resultat= valeur1;

	if (valeur2 > resultat)
	{
		resultat = valeur2;
	}

	if (valeur3 > resultat)
	{
		resultat = valeur3;
	}

	return resultat;

}

double factorielle(unsigned int entier)
{
	// D�claration des varaibles
	double resultat = 1;

	for (unsigned int i = 1; i <= entier; i++)
	{
		resultat = resultat * i;
	}

   return resultat;
}

bool savoirSiPair(int nb)
{
	/*if (nb % 2 == 0)
	{
		return true;
	}
	else
		return false;*/
	return !nb % 2;
	//return nb % 2 == 0;

}
