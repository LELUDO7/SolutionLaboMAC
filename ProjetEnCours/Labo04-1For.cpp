// But : Le programme demande � l'utilisateur 5 notes. 
// Il calcule la moyenne du groupe et affiche le r�sultat � l'�cran
// Auteur : Karine Moreau
// Date : 2021-09-13

#include <iostream>

using namespace std;


void main()
{
   // Pour afficher correctement les accents
   setlocale(LC_ALL, "");     

   // D�claration des constantes et initialisation (donner une valeur)
   const int NB_NOTES = 5;

   // D�claration des variables
   // il y a des variables pour m�moriser les informations fournies par l'utilisateur.
   // C'est la responsabilit� de l'utilisateur de donner la premi�re valeur � la note
   double note;
   // il y a des variables pour calculer les r�sultats.
   // C'est la responsabilit� du programmeur d'y mettre la valeur de d�part
   double moyenne = 0;     // Au d�part, aucune note n'est entr�e, la moyenne du groupe vaut 0;


   for (int compteur = 1; compteur <= NB_NOTES; compteur++)
   
   {
      // Le programme demande une note � l'utilisateur
      cout << "Veuillez entrer une note : " ;
      cin >> note;

      // On ajoute la note � la moyenne
      moyenne = moyenne + note;
   
   }

   // Ici on a maintenant additionner les 5 notes dans la variable moyenne
   // il faut la diviser par le nombre total de note
   moyenne = moyenne / NB_NOTES;

   cout << "La moyenne du groupe est de : " << moyenne << endl;

   
   system("pause");

}
// plan de test
//  







