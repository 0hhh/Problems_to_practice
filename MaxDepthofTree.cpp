// #include <bits/stdc++.h>
#include<iostream>
using namespace std;

// structure of every node in the tree
struct node {
	int value;
	node *left;
	node *right;

	node(int val) {
		value = val;
		left = NULL;
		right = NULL;
	}
};

// the function to find max depth of the tree
int depth = 0; //global variable

void find_maxdepth(node *curr, int curr_depth) {
	if (curr == NULL) return;

	// max depth is max of curr_depth and global depth
	depth = max(depth, curr_depth);
	// find max depth in left subtree
	find_maxdepth(curr->left, curr_depth + 1);
	// find max depth in right subtree
	find_maxdepth(curr->right, curr_depth + 1);
}

int main() {
	// input tree
	node *root = new node(5);
	root->left = new node(7);
	root->right = new node(3);
	root->left->left = new node(2);
	root->left->right = new node(9);
	root->right->right = new node(1);
	root->left->right->left = new node(6);


	// input tree
	//        5
	//      /  	//     7    3
	//   /      	//  2    9    1
	//      /
	//     6
	// 			5
	// 		  /	  \
	// 		 7 	   3
	// 	   /   \	\
	// 	  2		9	 1
	//  	   /
	//        6
	// print the max depth of the tree
	find_maxdepth(root, 0);
	cout << "Max Depth: " << depth << endl;
}