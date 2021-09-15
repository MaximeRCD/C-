#include "Magicien.h"

int magicien::set_pv() {
	srand(time(NULL)); // Seed the time
	int finalNum = rand() % (10 - 1 + 1) + 1; // Generate the number, assign to variable.
	switch (finalNum)
	{
	case 1:
		return this->point_de_vie = 1500;
	default:
		return this->point_de_vie = 150;
	}
};

int magicien::set_force() {
	srand(time(NULL)); // Seed the time
	int finalNum = rand() % (4 - 1 + 1) + 1; // Generate the number, assign to variable.
	return this->force=finalNum;
};

int magicien::set_smartness() {
	srand(time(NULL)); // Seed the time
	int finalNum = rand() % (35 - 10 + 1) + 10; // Generate the number, assign to variable.
	return this->smartness=finalNum;
};