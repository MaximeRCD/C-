#pragma once
#include<iostream>
using namespace std;
#include<string>
#include"Fictional_charactere.h"
#include <vector>

typedef struct node {
	std::string key;
	int index;
	node* left;
	node* right;
}NODE;

typedef struct BinaryTree {
	int size;
	int depth;
	node* root;
}BT;

bool insert(std::string new_key, int new_index, node* current, BinaryTree* my_BT);
void init(BinaryTree* my_BT);
bool isBST(node* root);
int getHeight(node* current, int i);
void index(BinaryTree* my_BT, Fic_char* fictional_character, int taille);
Fic_char* lookup(node* current, Fic_char* fictional_character, std::string firstname);
void display_char(Fic_char* fictional_character);
void range_query(node* current, Fic_char* fictional_character, std::string str1, std::string str2);
int range_query_age(node* current, Fic_char* fictional_character, std::string str1, std::string str2, vector<int> *a);
float mean_age(node* current, Fic_char* fictional_character, std::string str1, std::string str2, vector<int>* a);