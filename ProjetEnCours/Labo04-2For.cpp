// But : Le programme demande un nombre de d�part et un nombre de fin et 
// le programme affiche les nombres compris entre le nombre de d�part et le nombre de fin
// nombre de d�part : 5
// nombre de fin : 10
// 5
// 6
// 7
// 8
// 9
// 10
// 
// nombre de d�part : 10
// nombre de fin : 5
// 10
// 9
// 8
// 7
// 6
// 5
// 
// Auteur : Karine Moreau
// Date : 2021-09-14

#include <iostream>

using namespace std;


void main()
{
   // Pour afficher correctement les accents
   setlocale(LC_ALL, "");     

   // D�claration des constantes et initialisation (donner une valeur)
 
   // D�claration des variables
   
   int depart;
   int fin;

   // il y a des variables pour m�moriser les informations fournies par l'utilisateur.
   // C'est la responsabilit� de l'utilisateur de donner la premi�re valeur � la note
   cout << "Veuillez entrer le nombre de d�part" << endl;
   cin >> depart;

   // il y a des variables pour calculer les r�sultats.
   // C'est la responsabilit� du programmeur d'y mettre la valeur de d�part
   cout << "Entrer le nombre de fin";
   cin >> fin ;
 
   
   //if (fin > depart)
   {

   


   for (int compteur = depart; compteur <= fin; compteur++)
   {
      cout << compteur << endl;

   }

}
   //else
   {

      for (int compteur = depart; compteur >= fin; compteur--)
      {
         cout << compteur << endl;

      }


   }

   system("pause");

}
// plan de test
//  







