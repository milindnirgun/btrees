#include <iostream>
using namespace std;

struct node{
    int data;
    struct node *left;
    struct node *right;
};

class btree{
public:
    node *root;
	btree();
	~btree();
    void insert(int key, node *leaf);
    int search(int key, node *x);
	void insert(int key);
	int search(int key);
};
