#include<iostream>
using namespace std;
#include"BST.h"
#include"Fictional_charactere.h"
#include"Database.h"
int main() {

	
	BinaryTree myBT;
	init(&myBT);
	vector<int> somme;
	int taille = nbr_line("..\\FictionalCharacters.csv");
	Fic_char* list_of_characters = new Fic_char[taille];
	
	createDatabase("..\\FictionalCharacters.csv", &myBT, list_of_characters/*, myBT.root*/);
	
	// test de la fonction getHeight
	myBT.depth = getHeight(myBT.root, 0);
	cout << "\n------------------------------------------------------------------------------------------- \n" << endl;
	cout << "La profondeur du BST est de : " << myBT.depth << endl;
	cout << "\n------------------------------------------------------------------------------------------- \n" << endl;
	
	// test de la fonction isBST
	isBST(myBT.root);
	if (isBST(myBT.root)) {
		cout << "Le test est concluant, c'est bien un arbre binaire de recherche " << endl;
		cout << "\n------------------------------------------------------------------------------------------- \n" << endl;

	}

	// Test de la fonction de recherche d'un personnage
	Fic_char* searched = lookup(myBT.root, list_of_characters, "Maxime");
	cout << "Je cherche le personnage Maxime " << endl;
	display_char(searched);

	// Test de la fonction de recherche par interval de prénoms
	range_query(myBT.root, list_of_characters, "J", "M");

	// Retour de la moyenne des ages des personnages
	float b = mean_age(myBT.root, list_of_characters, "J", "M", &somme);
	cout << "La moyenne des ages des gens recherches est egale a : " << b << " ans."<<endl;


	return 0;
}