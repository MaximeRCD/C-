#include"Database.h"

void createDatabase(std::string path_to_csv_file,BinaryTree* bt ,Fic_char* fictional_character) {
	int taille = nbr_line(path_to_csv_file);
	csv_parser(path_to_csv_file, fictional_character);
	index(bt, fictional_character, taille);
}