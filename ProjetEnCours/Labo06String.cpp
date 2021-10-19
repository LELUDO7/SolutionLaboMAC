// But : comprendre et utiliser une chaine de caract�res : string
// Auteur : Karine Moreau
// Date : 2021-10-18


#include <iostream>
#include <string>

using namespace std;

int main()
{
   setlocale(LC_ALL, "");

   // d�claration des variables
   int entier = 0;
   string prenom;          // Ici on a appel� le constructeur de string, qui par d�faut initialise la variable avec une chaine vide ""
   string adresse; //allo
   string paragraphe;

   cout << "Contenu de entier : " << entier << endl;
   cout << "Contenu de pr�nom : " << prenom << endl;

   cout << "Data de la variable prenom :  " << prenom.data() << endl;
   cout << "Taille de la variable prenom :  " << prenom.size() << endl;
   cout << "Longueur de la variable prenom :  " << prenom.length() << endl;
   cout << "Capacit� de la variable prenom :  " << prenom.capacity() << endl;
   cout << "Taille maximale de la variable prenom :  " << prenom.max_size() << endl;

   string chaine1("Bonjour");
   string chaine2("Bonjour � tous ! Et Bienvenue dans le cours de programmation");
  
   cout << "Data de la variable chaine1 :  " << chaine1.data() << endl;                // Obtenir le contenu de la variable
   cout << "Taille de la variable chaine1 :  " << chaine1.size() << endl;              // le nombre de caract�res utilis�s
   cout << "Longueur de la variable chaine1 :  " << chaine1.length() << endl;          // Le nombre de caract�res utilis�s donc m�me chose que le size
   cout << "Capacit� de la variable chaine1 :  " << chaine1.capacity() << endl;        // l'espace occup� en m�moire

   cout << "Data de la variable chaine2 :  " << chaine2.data() << endl;
   cout << "Taille de la variable chaine2 :  " << chaine2.size() << endl;
   cout << "Longueur de la variable chaine2 :  " << chaine2.length() << endl;
   cout << "Capacit� de la variable chaine2 :  " << chaine2.capacity() << endl;

   system("cls");
   

   // int nb1, nb2, nb3;
    //cin >> nb1 >> nb2 >> nb3;
    //cin >> adresse;                                 // enter, espace, tabulation et cela s�pare les contenus des variables


   cout << "Veuillez entrer votre pr�nom : ";
   cin >> prenom;                               // Karine + enter
   // Apr�s chaque cin, il faut s'assurer que la m�moire du clavier soit compl�tement vide. Il faut supprimer les s�parateurs laiss�s par le cin (espace, tabulation ou un enter)
   //cin.ignore(1, '\n');
   cin.ignore();
   //cin.ignore(4);
   //cin.ignore('\n');           // GROSSE ERREUR


   cout << "Vous vous appelez " << prenom << endl;    // Karine

   cout << "Veuillez entrer votre adresse : ";

  // int nb1, nb2, nb3;
   //cin >> nb1 >> nb2 >> nb3;
   //cin >> adresse;                                 // enter, espace, tabulation et cela s�pare les contenus des variables
   // Pour permettre la saisie d'espace dans une chaine de caract�res, il faut utiliser la fonction getline
   getline(cin, adresse, '\n');           // Dans la m�moire du clavier, il reste en enter du pr�nom. Le getline le trouve et ach�ve son travail.
                                          // Solution : il faudrait vider la m�moire du clavier avant d'utiliser le getline ou apr�s chaque cin

   cout << "Vous habitez au " << adresse << endl;

   system("pause");
   return 0;
}