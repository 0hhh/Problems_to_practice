// #include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct node {
    int value;
    node *left;
    node *right;

    node (int val){
        value = val;
        left = NULL;
        right = NULL;
    }
};

map<int, int> subs;

int findsumtree(node *current){
    if (current == NULL) return 0;

	// get subtree of left part
	int left = findsumtree(current->left);
	// get subtree of right part
	int right = findsumtree(current->right);
	// subtree of curr
	subs[current->value] = current->value +left + right;
	return subs[current->value];
}
// Driver code
int main(){
    // input tree
	node *root = new node(5);
	root->left = new node(7);
	root->right = new node(3);
	root->left->left = new node(2);
	root->left->right = new node(9);
	root->right->right = new node(1);
	root->left->right->left = new node(6);
    // 			5
	// 		  /	  \
	// 		 7 	   3
	// 	   /   \	\
	// 	  2		9	 1
	//  	   /
	//        6

    // print sumtree
    findsumtree(root);
    for (auto i : subs) {
        cout << i.first << " -> " << i.second << endl;
    }
    return 0;
}