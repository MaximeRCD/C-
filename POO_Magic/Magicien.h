#pragma once
#include "Personnage.h";
#include <time.h>

class magicien :public personnage {
protected:
	int expérience = 1;
	int smartness=0;
	int force=0;
public:
	magicien() {};
	magicien(std::string name, int pv, int smartness, int force) {
		this->name = name;
		this->point_de_vie = pv;
		this->force = force;
		this->smartness = smartness;
	};
	int set_pv();
	int set_force();
	int set_smartness();
	void display() { cout << "name : " << this->name << "\n"<< "pv : " << this->point_de_vie <<"\n" << "force : " << this->force <<"\n" << "Intelligence : " << this->smartness << "\n" << "Expérience : " << this->expérience << "\n---------------------------------------------------------------------------------------------------------------------" << endl; }
};

class magicien_de_feu : public magicien {
protected:
	int mana = 100;
	int boule_de_feu = 90;
	int coup_de_poing = 5;
public:
	magicien_de_feu(std::string name, int pv, int smartness, int force) : magicien(name, pv, smartness, force) {};

	void attaque_speciale(personnage* p) {
		if ((mana - 30) > 0) {
			this->attaque(p, boule_de_feu);
			this->mana -= 30;
		}
		else { cout << "Pas assez de mana !! Tente un coup de poing " << endl; }
	};
	void baston(personnage* p) {
		this->attaque(p, coup_de_poing);
		this->mana += 25;
	};
	void display() { cout << "name : " << this->name << "\n" << "pv : " << this->point_de_vie << "\n" << "force : " << this->force << "\n" << "Intelligence : " << this->smartness << "\n" << "Expérience : " << this->expérience << "\n"<< "Mana : "<< this->mana <<"\n---------------------------------------------------------------------------------------------------------------------" << endl; }
	int get_mana() { return this->mana; };
};

class magicien_de_glace : public magicien {
protected:
	int mana = 100;
	int boule_de_glace = 80;
	int coup_de_poing = 1;
public:
	magicien_de_glace(std::string name, int pv, int smartness, int force) : magicien(name, pv, smartness, force) {};
	void attaque_speciale(personnage* p) {
		if ((mana - 25) > 0) {
			this->attaque(p, boule_de_glace);
			this->mana -= 25;
		}
	};
	void baston(personnage* p) {
		this->attaque(p, coup_de_poing);
		this->mana += 25;
	};
	void display() { cout << "name : " << this->name << "\n" << "pv : " << this->point_de_vie << "\n" << "force : " << this->force << "\n" << "Intelligence : " << this->smartness << "\n" << "Expérience : " << this->expérience << "\n" << "Mana : " << this->mana << "\n---------------------------------------------------------------------------------------------------------------------" << endl; }
	int get_mana() { return this->mana; };
};