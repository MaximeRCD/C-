#include"BST.h"

bool insert(std::string new_key, int new_index, node* current, BinaryTree* myBT) {
	// il faut garder en mémoire le pointeur précédent pour pouvoir implémenter le noeud au bon endroit
	if (myBT->root == nullptr) {
		node* new_node = new NODE;
		new_node->key = new_key;
		new_node->index = new_index;
		new_node->left = nullptr;
		new_node->right = nullptr;
		myBT->root = new_node;
		myBT->size++;
		return true;
	}
	if (new_key.compare(current->key) <= 0) {
		if (current->left == nullptr) {
			node* new_node = new NODE;
			new_node->key = new_key;
			new_node->index = new_index;
			new_node->left = nullptr;
			new_node->right = nullptr;
			current->left = new_node;
			myBT->size++;
			return true;
		}
		else {
			return insert(new_key, new_index, current->left, myBT);
		}
	}
	if (new_key.compare(current->key) > 0) {
		if (current->right == nullptr) {
			node* new_node = new NODE;
			new_node->key = new_key;
			new_node->index = new_index;
			new_node->left = nullptr;
			new_node->right = nullptr;
			current->right = new_node;
			myBT->size++;
			return true;
		}
		else {
			return insert(new_key, new_index, current->right, myBT);
		}
	}
	else {
		cout << "erreur d'insertion";
		return false;
	}
}


/*Essayons de bien définir la profondeur de l'arbre*/

int getHeight(node* current, int i) {
	if (current == nullptr) {
		return i;
	}
	else {
		// parcours recursif de la branche gauche 
		int	a = getHeight(current->left, ++i);
		// parcours recursif de la branche droite
		int b = getHeight(current->right, i);
		if (a >= b) {
			i = a;
		}
		else { i = b; }
	}
}

/*bool level_is_empty(node* l, node* r) {
	if (l == nullptr && r == nullptr) {
		return true;
	}
	else {
		return false;
	}
}*/

bool isBST(node* root) {
	node* current = root;
	//cout << " Currently in  " << current->key << endl;
	node* leftnext = root->left;
	node* rightnext = root->right;

	if (current == nullptr) {
		return true;
	}
	if (rightnext != nullptr) {
		if (current->key.compare(rightnext->key) < 0) {
			//cout << " go to " << rightnext->key << endl;
			isBST(rightnext);
		}
		else {
			return false;
		}
	}
	if (leftnext != nullptr) {
		if (current->key.compare(leftnext->key) >= 0) {
			//cout << " go to " << leftnext->key << endl;
			isBST(leftnext);
		}
		else {
			return false;
		}
	}
}

void init(BinaryTree* my_BT) {
	my_BT->depth = 1;
	my_BT->root = nullptr;
	my_BT->size = 0;
}

void index(BinaryTree* my_BT,Fic_char* fictional_character, int taille) {
	for (int i = 0; i < taille; i++) {
		insert((fictional_character+i)->firstname, i, my_BT->root, my_BT);
	}
}

Fic_char* lookup(node* current, Fic_char* fictional_character, std::string firstname) {
	if (firstname.compare(current->key) == 0) {
		return (fictional_character + (current->index));
	}
	if (firstname.compare(current->key) < 0) {
		if (current->left != nullptr){
			return lookup(current->left, fictional_character, firstname);
		}
		else {
			return nullptr;
		}
	}
	if (firstname.compare(current->key) > 0) {
		if (current->right != nullptr){ 
			return lookup(current->right, fictional_character, firstname); 
		}
		else {
			return nullptr;
		}	
	}	
}

void range_query(node* current, Fic_char* fictional_character, std::string str1, std::string str2) {
		if (str1.compare(current->key) <= 0 && str2.compare(current->key) >= 0) {
			display_char(fictional_character + (current->index));
			if (current->right != nullptr && current->right->key.compare(str2) <= 0) {
				range_query(current->right, fictional_character, str1, str2);
			}
			if (current->left != nullptr && current->left->key.compare(str1) >= 0) {
				range_query(current->left, fictional_character, str1, str2);
			}
		}
		if (current->key.compare(str1) < 0) {
			if (current->right != nullptr) {
				return range_query(current->right, fictional_character, str1, str2);
			}
		}
		if (current->key.compare(str2) > 0) {
			if (current->left != nullptr) {
				return range_query(current->left, fictional_character, str1, str2);
			}
		}
		
}

void display_char(Fic_char* fictional_character) {
	if (fictional_character == nullptr) {
		cout << "Le personnage recherche n'existe pas dans la base de donnees" << endl;
		cout << "\n------------------------------------------------------------------------------------------- \n" << endl;
	}
	else {
		cout << fictional_character->firstname << " " << fictional_character->lastname << " est le personnage principal du livre " << fictional_character->book << " et a : "<< fictional_character->age << "ans\n";
		cout << "\n------------------------------------------------------------------------------------------- \n" << endl;
	}
}
int range_query_age(node* current, Fic_char* fictional_character, std::string str1, std::string str2, vector<int> *a) {
	if (str1.compare(current->key) <= 0 && str2.compare(current->key) >= 0) {
		a->push_back(stoi(((fictional_character + (current->index))->age)));
		if (current->right != nullptr && current->right->key.compare(str2) <= 0) {
			range_query_age(current->right, fictional_character, str1, str2, a);
		}
		if (current->left != nullptr && current->left->key.compare(str1) >= 0) {
			range_query_age(current->left, fictional_character, str1, str2, a);
		}
	}
	else {
			if (current->key.compare(str1) < 0) {
				if (current->right != nullptr) {
					return range_query_age(current->right, fictional_character, str1, str2, a);
				}
			}
			if (current->key.compare(str2) > 0) {
				if (current->left != nullptr) {
					return range_query_age(current->left, fictional_character, str1, str2, a);
				}
			}
		}
}

float mean_age(node* current, Fic_char* fictional_character, std::string str1, std::string str2, vector<int>* a) {
		range_query_age(current, fictional_character, str1, str2, a);
	int res = 0;
	// créer un itérateur sur le vecteur pour le parcourir
	vector<int>::iterator i;
	for (i=a->begin(); i!= a->end(); i++) {
		res += *i;
	}
	return float(res / a->size());
}