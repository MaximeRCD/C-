#pragma once
#include <string>
#include <iostream>
using namespace std;

class personnage {
protected:
	std::string name;
	int point_de_vie;

public:
	//personnage();
	//personnage(std::string name, int pv) { this->name = name; this->point_de_vie = pv; };
	void display(){ cout << this->name << " a " << this->point_de_vie << " point de vie \n"; };
	int get_pv() { return this->point_de_vie; };
	std::string get_name(){ return this->name; };
	void recevoir_d�gat(int d�gat) { this->point_de_vie -= d�gat; };
	void attaque(personnage* p, int d�gat) { p->recevoir_d�gat(d�gat); };
};