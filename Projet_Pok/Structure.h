#pragma once
#include <string>
#include "Structure.h"
// le type enum�r� d�crivant le type de Pokemon parmi les 18 existants
enum PokemonType
{
    Normal, Combat, Flying, Poison, Sol, Roche, Bug,
    Fantome, Steel, Feu, Herbe, Eau, Electrique, Psychique,
    Glace, Dragon, Dark, Fairy
};
//on cr�er la structure pokemon
typedef struct pokemon{ // typedef permet de ne pas r�p�ter struct pokemeon � chaque fois que l'on en a besoin ailleurs.
	std::string nom; //nom du pok�mon
	int xp;   //son nombre d'xp
	int pv;   //son nbr de pv
	int niv;  //son num�ro d'�volution
	int cp;   //son nbr de points de combats
}pokemon;
// je cr�� un nouveau type qui est struct especepokemon dont l'alias est especePokemon
typedef struct especePokemon{
	std::string nom;             // dans le .h on utilise pas using namespace std donc il faut le mettre
	PokemonType type;
	std::string evolution;
	unsigned int nb_bonbon_to_evolv;
	bool estEvolue;
}especePokemon;
//on cr�er la structure des ressources du joueur
typedef struct ressources {
	int bonbons;
	int poussieres;
}ressources;
// on cr�er la structure pokedex
typedef struct Pokedex {
	// pointeur vers tableau dynamique de pokemon
	pokemon* mesPokemons;
	int capacite;
	int nbPokemon;
}Pokedex;

typedef struct Evolution {
	std::string ev_from;
	std::string ev_to;
	Evolution* suivant;
}evolution;
typedef struct Historique {
	int nombre;
	Evolution* debut;
}historique;

typedef struct CombatEspece {
	std::string nature;
	std::string strongAgainst[5];
	std::string weakAgainst[5];
	CombatEspece* next;
}combatEspece;

typedef struct Head {
	int nbr_espece;
	int hash;
	CombatEspece* first;
}head;

typedef struct HashTable {
	/*Le facteur de compression (load factor) qui est la proportion d'alv�oles utilis�es dans une table de hachage est une indication critique de ses performances.
		Il est d�fini ainsi :
								facteur de compression = k/n
	k est le nombre de paires cl�valeur ;
	n est le nombre d'alv�oles.
	Dans notre cas k=18 et fact_comp=0,7 donc  n=26
	*/
	int nbr_ele;
	int nbr_alveole;
	Head** tab; // tableau de pointeur
}hashTable;

