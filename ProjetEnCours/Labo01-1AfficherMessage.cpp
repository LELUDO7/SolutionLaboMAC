//But : �crire un programme qui affiche un message � l'�cran dans la console
//Auteur : Karine Moreau
//Date : 2021-08-26

// Tout programme doit commencer par la fonction principale qui s'appelle main
// La plupart des fonctions en informatique sont suivies de parenth�ses pour dresser la liste des param�tres 
// Si la liste de param�tres est vide, les parenth�ses sont obligatoires et le contenu reste vide ()
// Une fonction peut ou pas retourner un r�sultat.
// On doit indiquer le type de r�sultat attendu avant le nom de la fonction. Ici on ne retourne rien donc void

// On doit s'�quiper d'outils pour �viter d'avoir � les recr�er � chaque fois. Les outils sont stock�s dans une
// biblioth�que. On a besoin d'une biblioth�que sp�cialis�e dans les flux (stream) d'entr�es et les sorties 
//(in : i : input)(o : out :output) => iostream
#include <iostream>

void main()

// Les instructions doivent �tre plac�es dans un bloc d'instructions qui en C++ s'ouvre avec une accolade { et se
// ferme avec }
// L'accolade ouvrant doit �tre align�e verticalement avec l'accolade fermante
// Les instructions doivent �tre d�cal�es d'une tabulation pour montrer qu'elles sont � l'int�rieur du bloc. 
// On indente le code pour am�liorer sa lisibilit�
{
	// Afficher un message � l'�cran
	// channel output  : ou cout pour solliciter le p�riph�rique de sortie (o : out : output) qui est l'�cran
	// L'instructiuon cout se trouve dans l'espace de nom qui s'appelle std. 
	// On doit le faire suivre de deux fois des deux points
	std::cout << "Bienvenue � tous !";
		// << est un op�rateur de redirection. Dirige le message vers l'�cran
		// Tout texte en C++ doit �tre encadr� de guillemets. Il apparait en rouge
		// Chaque instruction doit se terminer par une point virgule ;

		
}