// But : D�velopper une s�rie de fonctions et de les tester
// �crire une fonction qui permet de calculer la moyenne des notes entr�es par l�utilisateur. Le nombre de notes est
// pass� en param�tre � la fonction.Cette fonction n�affiche pas le r�sultat, elle doit le retourner.Le main est
// responsable de fournir le nombre de notes qui sera demand� � l�utilisateur et d�afficher la moyenne obtenue.
// 
// 
// 
// 
// �crire une fonction qui re�oit trois param�tres, le num�ro du jour, le num�ro du mois et l�ann�e. A partir de ces
//informations, la fonction retourne vrai si la date est une date valide et faux dans le cas contraire.Le main demande
//ces trois valeurs � l�utilisateur tant que ces valeurs ne forment pas une date valide.
// 
// 
// 
// 
// 
// 
// 
// 
// Auteur : Karine Moreau
// Date : 2021-09-28

#include <iostream>
#include "Devoir04.h"
using namespace std;

void main()
{
   // Pour afficher correctement les accents
   setlocale(LC_ALL, "");     // Appel d'une fonction qui retourne rien de type void

   // d�clarer les variables
   int jour;
   int mois;
   int annee;

   
   cout << "Veuillez entrer le jour" << endl;
   cin >> jour;
   cout << "Veuillez entrer le mois" << endl;
   cin >> mois;
   cout << "Veuillez entrer le annee" << endl;
   cin >> annee;

   while (!ValiderDate(jour,mois,annee))
   {
      cout << "ERRORERRORERRORERRORERRORERROR invalide date idiot" << endl;
      
      cout << "Veuillez entrer le jour" << endl;
      cin >> jour;
      cout << "Veuillez entrer le mois" << endl;
      cin >> mois;
      cout << "Veuillez entrer le annee" << endl;
      cin >> annee;
   } 
   cout << "La date est valide"; 









   /*int NbNotes;

   cout << "veuillez entrer le  nombre de notes qui sera demander a l'utilisateur : ";
   cin >> NbNotes;
   
      while (NbNotes <= 0)
      {
         cout << " Le nombre de note ne peut pas �tre inf�rieur ou �gale � 0 " << endl ;
         cin >> NbNotes;
      }

   cout << " la moyenne obtenue est de : " << CalculerMoyenne(NbNotes) << endl ;
   



   */
   system("pause");



}
// plan de test
//  







