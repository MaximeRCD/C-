#pragma once
#include<string>
#include<fstream>
#include<istream>
typedef struct Fic_char{
	std::string lastname;
	std::string firstname;
	std::string book;
	std::string age;
}fcs;

void csv_parser(std::string path_to_csv_file, Fic_char* tab);
int nbr_line(string path_to_csv_file);