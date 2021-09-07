// But : Ecrire un programme qui demande une lettre � l'utilisateur. 
// Le programme indique s'il s'agit d'une voyelle ou d'une consonne
// Auteur : William Nault
// Date : 2021-09-07

#include <iostream>

void main()
{
   // Pour afficher correctement les accents
   setlocale(LC_ALL, "");     

   

   // D�claration des variables
   
   char lettre;
   
   // Demander une lettre � l'utilisateur

   std::cout << "Veuillez inserer une lettre :"; 
 
   std::cin >> lettre;
   // Le nom de la variable; 



   // Si le caract�re n'est pas une lettre afficher un message d'erreur 
   
   // La lettre n'est pas comprise entre a et z

   if ((lettre < 'a' || lettre > 'z') && (lettre < 'A' || lettre > 'Z'))
   {
      std::cout << "ERREUR le caract�re rentr� n'est pas une lettre \n";
   }



   // sinon si c'est un A E I O U Y (minuscule et majuscule) afficher c'est une voyelle 
   
   else
   {
      switch (lettre)
      {
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':
      case 'y':
      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U':
      case 'Y':
      std::cout << "Ceci est une voyelle \n";
      // ATTENTION : il faut terminer le case avec un BREAK
      break;

      default:
         std::cout << " Ceci est une consonne \n";

         break;
      }
 
   }
   
  


   
   system("pause");
}
// plan de test
//  Lettre  |  �cran
//     a    |  Ceci est une voyelle
//     E    |  Ceci est une voyelle
//     3    |  ERREUR le caract�re rentr� n'est pas une lettre
//     p    |  Ceci est une consonne
//     v    |  Ceci est une consonne







