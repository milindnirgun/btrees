#include "btree.h"
#include <iostream>
using namespace std;

/**
 * Main program for inserting data and searching the binary tree.
 */
int main(){
    btree *tree = new btree();

    tree->insert(5); 
    tree->insert(6);
	tree->insert(14);
	tree->insert(5);
	tree->insert(8);
	tree->insert(11);
	tree->insert(18);
    cout << tree->search(18);
    cout << tree->search(13);

return 0;
}
