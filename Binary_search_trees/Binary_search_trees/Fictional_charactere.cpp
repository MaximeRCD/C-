#include<iostream>
using namespace std;
#include"Fictional_charactere.h"

int nbr_line(string path_to_csv_file) {
	// définir le flux vers le fichier : 
	std::ifstream csv(path_to_csv_file);
	// Test d'erreur d'import de fichier
	if (!csv.is_open()) {
		cout << "erreur sur le flux de fichier\n";
	}
	int compteur_de_ligne = 0;
	string sauv;
	while (csv.good()) {
		getline(csv, sauv);
		compteur_de_ligne++;
	}
	return compteur_de_ligne;
}

void csv_parser(string path_to_csv_file, Fic_char* tab) {
	// définir le flux vers le fichier : 
	std::ifstream csv(path_to_csv_file);
	// Test d'erreur d'import de fichier
	if (!csv.is_open()) {
		cout << "erreur sur le flux de fichier\n";
	}
	
	int index = 0;
	while (csv.good()) {
		Fic_char fiction;
		getline(csv, fiction.lastname, ';');
		//cout << fiction.lastname << endl;
		getline(csv, fiction.firstname, ';');
		//cout << fiction.firstname << endl;
		getline(csv, fiction.book, ';');
		//cout << fiction.book << endl;
		getline(csv, fiction.age);
		//cout << fiction.age << endl;
		tab[index] = fiction;
		index++;
	}
	//cout << i << endl;
}


