// But : �crire un programme qui lit deux nombres et qui affiche lequel des deux est le plus grand 
// ou dit que les deux nombres sont �gaux
// Auteur : 
// Date : 2021-09-03

#include <iostream>

void main()
{
   // Pour afficher correctement les accents
   setlocale(LC_ALL, "");     

   // D�claration des variables
   
   int PremierNombre;
   int DeuxiemeNombre;

   // Demander un nombre a l'utilisateur

   std::cout << "Veuillez inserer un nombre entier :";
   std::cin >> PremierNombre; 

   std::cout << "Veuillez inserer un nombre entier :";
   std::cin >> DeuxiemeNombre;

   if (PremierNombre > DeuxiemeNombre)
   {
      std::cout << PremierNombre << " est plus grand que le deuxi�me nombre" << std::endl;



   }
   else 
   {
      if (PremierNombre==DeuxiemeNombre)
      {
         std::cout << "Le premier et le deuxi�me nombre sont �gaux" << std::endl;
      }
      else
      {
        std::cout << DeuxiemeNombre << " est plus grand que le premier nombre" << std::endl;
      }
      
   }
   
   system("pause");

   // plan de test
   // Premier nombre | Deuxi�me nombre | �cran
   //      12                23          23 est le plus grand
   //      45                32          45 est le plus grand
   //      33                33          les nombres sont �gaux
   //     -12               -24          -12 est le plus grand
   //     -13                36          36 est plus grand
   //     -11               -11          les nombres sont �gaux




}


