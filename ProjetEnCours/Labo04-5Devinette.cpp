// But : Compl�tez ce programme pour qu�il donne la possibilit� � l�utilisateur de deviner le nombre contenu dans random.
//L�utilisateur a un maximum de 5 chances.Le programme v�rifie que l�utilisateur a bien entr� un nombre entre 0 et
//100 et lui indique s�il gagne ou dans le cas contraire lui indique le nombre d�essais restant et lui redemande un
//nombre.
// Auteur : Karine Moreau
// Date : 2021-09-16

#include <iostream>
#include <time.h>

using namespace std;

int main()
{
   // D�claration des constantes
   const int NB_CHANCES = 5;
   const int MIN = 20;
   const int MAX = 30;
   
   // d�claration des variables
   int random; // permet de m�moriser le nombre choisi al�atoirement par l�ordinateur
   int nb;     // C'est la responsabilit� de l'utilisateur de lui donner une veleur de d�part
   int nbEssais = NB_CHANCES;          // Une variable pour le calcul dans le programme, 
                                       // c'est la responsabilit� du programme de lui mettre une valeur de d�part
                                       // Au d�part, au d�but du programme l'utilisateur a bien NB_CHANCES

   setlocale(LC_ALL, "");
   srand(time(0)); // pour activer l�al�atoire dans le programme
   random = rand() % (MAX -MIN + 1) + MIN; // l�ordinateur calcule un nombre al�atoire entre 0 et 100 et le stocke dans random

   // Pour tester le programme, on affiche le nombre � deviner
   cout << "le nombre � deviner est : " << random << endl;

   // Demander � l'utilisateur un nombre
   cout << "Vous devez deviner un nombre compris entre " << MIN << " et " << MAX << "." << endl;
   cout << "Vous avez " << NB_CHANCES << " chances." << endl;
   cout << "Veuillez entrer un nombre compris entre " << MIN << " et " << MAX << " : ";
   cin >> nb;

   // Tant que le nb n'est pas compris entre MIN et MAX, on affiche un message d'erreur
   while (!(nb>=MIN && nb<=MAX))
   {
      cout << "Erreur : Le nombre n'est pas compris entre " << MIN << " et " << MAX << "." << endl;
      cout << "Veuillez entrer un nombre compris entre " << MIN << " et " << MAX << " : ";
      cin >> nb;
   }
   // On vient de lire un bon nombre, le nb d'essais doit diminuer de 1
   nbEssais--;

   // Tant que le nb n'est �gal � random et qu'il reste des chances, on doit redemander le nb 
   while (nb != random && nbEssais >=1)
   {
      cout << " Non ce n'est pas le bon nombre." << endl;
      cout << "Il vous reste " << nbEssais << " chance(s)." << endl;

      cout << "Veuillez entrer un nombre compris entre " << MIN << " et " << MAX << " : ";
      cin >> nb;

      // Tant que le nb n'est pas compris entre MIN et MAX, on affiche un message d'erreur
      while (!(nb >= MIN && nb <= MAX))
      {
         cout << "Erreur : Le nombre n'est pas compris entre " << MIN << " et " << MAX << "." << endl;
         cout << "Veuillez entrer un nombre compris entre " << MIN << " et " << MAX << " : ";
         cin >> nb;
      }
      // On vient de lire un bon nombre, le nb d'essais doit diminuer de 1
      nbEssais--;
   }

   // Quand on sort de la boucle soit on a gagn� soit on a �puis� toutes les chances
   if (nb == random)
   {
      cout << "Bravo vous avez gagn� en " << NB_CHANCES - nbEssais << " essai(s)." << endl;
   }
   else
   {
      cout << "Dommage, le bon nombre �tait " << random << "." << endl;
   }

   system("pause");
   return 0;
}



// plan de test
//  







