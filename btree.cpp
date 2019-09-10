#include "btree.h"
using namespace std;

btree::btree(){
	root = NULL;
}
void btree::insert(int key, node *leaf){

	if(key < leaf->data){
		if(leaf->left != NULL){
			insert(key, leaf->left);
		}else{
			leaf->left = new node;
			leaf->left->data = key;
			leaf->left->left = NULL;
			leaf->left->right = NULL;
		}
	}else if(key >= leaf->data){
		if(leaf->right != NULL){
			insert(key, leaf->right);
		}else{
			leaf->right = new node;
			leaf->right->data = key;
			leaf->right->right = NULL;
			leaf->right->left = NULL;
		}
	}

}

void btree::insert(int key){
	if(root != NULL){
		insert(key, root);
	}else{
		root = new node;
		root->data = key;
		root->left = NULL;
		root->right = NULL;
	}
}

 int btree::search(int key, node *x){
	if(x != NULL){
		if(key == x->data){
			return key;
		}
		if(key < x->data){
			return search(key, x->left);
            } 
        else{
			return search(key, x->right);
		}
	}
    else{
		return -1;
	}
}

int btree::search(int key){
	return search(key, root);
}
