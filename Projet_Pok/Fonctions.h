#pragma once
#include "Structure.h"
#include <cmath>
#include <cstdlib>
#include<stdlib.h>
#include<time.h>

// initialisation du bestiaire
void init_bestiaire(especePokemon bestiaire[]);
// tri du bestiaire
void tri(especePokemon bestiaire[]);
//on cherche le type des pokemons sous la forme d'un string 
std::string cherchertypepok(especePokemon bestiaire[], std::string pokemoncherche, std::string* tab);
// cr�er un tableau dyn de taille size
pokemon* initTableauDynPokedex(const int size);
// initialise la structure pokedex
void initPokedex(Pokedex* po);
// insert un pokemon dans le tableau dyn
void insertPokemon(Pokedex* po, pokemon* p);
// cr�er un entier al�atoire
long random_at_most(long max);
// initialisation d'un pok�mon sauvage
void init_pokemon(pokemon* p, std::string name, int exp, int pdv, int niv, int cp);
// g�n�ration d'un pokemon sauvage
pokemon genererPokemon(especePokemon* bestiaire);
// augmentation des ressources apr�s la capture
void nouv_ress(ressources* p);
// fonction powerUp
void powerUp(pokemon* p, ressources* r);
// fonction evolution 
void evolve(pokemon* p, especePokemon* bestiaire, ressources* r, historique* mon_historique);
// fonction insert evolution pour l'historique
void insert_evolution(historique* mon_historique, std::string from, std::string to);

Historique* initialisation();

// focntion de hashage
int hashfct(std::string str, int max);

// get alveole
CombatEspece* getalveole(HashTable* myHashtable, std::string key);
// la table contient il cette cl�
bool contains(HashTable* myHashtable, CombatEspece* c);
// insert table de hachage
void insert(CombatEspece* c, HashTable* myHashtable);
//init HT
HashTable* initHashTable(HashTable* hashtable);
// combat
void combat(Pokedex* po, especePokemon* bestiaire, std::string* tab, HashTable* myHashtable);