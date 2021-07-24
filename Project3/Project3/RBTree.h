#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Data.h"
using namespace std;

class RBTree {
public:
	class Node {
	public:
		bool isRed = true;
		int ID;
		Data data;
		Node* parent = nullptr;
		Node* left = nullptr;
		Node* right = nullptr;
		Node();
		Node(int ID, Data data);
	};
	Node* root = nullptr;

private:
	void rotateLeft(Node* curr);
	void rotateRight(Node* curr);
	void balanceNodes(Node* currNode);
	void rotateLeftLeft(Node* curr);
	void rotateRightRight(Node* curr);

public:
	Node* insertID(int ID, Data data, Node* currNode);
	Node* searchID(int ID, Node* root);
	//IDs should be in the form ccdddd, where cc is a 2 digit country ID and dddd is a 4 digit date ID
	//Change placeholder for whatever Data needs
	Node* insert(int ID, int placeholder);
	Data search(int ID);


	void debug_printInorder(Node* root);
	void debug_printPreorder(Node* root);
};


RBTree::Node::Node() {
	ID = -1;
}

RBTree::Node::Node(int ID, Data data) {
	this->ID = ID;
	this->data = data;
}

void RBTree::rotateLeft(Node* curr) {
	Node* shiftLeft = curr->right->left;
	Node* newRoot = curr->right;
	curr->right = shiftLeft;

	if (curr->right) {
		curr->right->parent = curr;
	}
	newRoot->parent = curr->parent;

	if (!curr->parent) {
		this->root = newRoot;
	}
	else if (curr == curr->parent->left) {
		curr->parent->left = newRoot;
	}
	else {
		curr->parent->right = newRoot;
	}

	newRoot->left = curr;
	curr->parent = newRoot;
}

void RBTree::rotateRight(Node* curr) {
	Node* shiftRight = curr->left->right;
	Node* newRoot = curr->left;
	curr->left = shiftRight;

	if (curr->left) {
		curr->left->parent = curr;
	}

	newRoot->parent = curr->parent;

	if (!curr->parent) {
		this->root = newRoot;
	}
	else if (curr == curr->parent->left) {
		curr->parent->left = newRoot;
	}
	else {
		curr->parent->right = newRoot;
	}

	newRoot->right = curr;
	curr->parent = newRoot;
}

void RBTree::rotateLeftLeft(Node* curr) {
	Node* parent = curr->parent;
	Node* grandparent = parent->parent;
	bool temp = grandparent->isRed;
	grandparent->isRed = parent->isRed;
	parent->isRed = temp;
	rotateRight(grandparent);
}

void RBTree::rotateRightRight(Node* curr) {
	Node* parent = curr->parent;
	Node* grandparent = parent->parent;
	bool temp = grandparent->isRed;
	grandparent->isRed = parent->isRed;
	parent->isRed = temp;
	rotateLeft(grandparent);
}

RBTree::Node* RBTree::insertID(int ID, Data data, Node* curr) {
	if (!curr) {
		return new Node(ID, data);
	}

	else if (ID < curr->ID) {
		curr->left = insertID(ID, data, curr->left);
		curr->left->parent = curr;
	}

	else if (ID > curr->ID) {
		curr->right = insertID(ID, data, curr->right);
		curr->right->parent = curr;
	}

	return curr;
}

RBTree::Node* RBTree::searchID(int ID, Node* root) {
	if (root->ID == ID) {
		return root;
	}
	else if (ID < root->ID) {
		return searchID(ID, root->left);
	}
	else if (ID > root->ID) {
		return searchID(ID, root->right);
	}
	else {
		return nullptr;
	}
}

void RBTree::balanceNodes(Node* curr) {
	while (curr && curr != root && curr->isRed && curr->parent->isRed) {
		Node* parent = curr->parent;
		Node* grandparent = curr->parent->parent;
		if (parent == grandparent->left) {
			Node* uncle = grandparent->right;
			if (uncle && uncle->isRed) {
				grandparent->isRed = true;
				parent->isRed = false;
				uncle->isRed = false;
				curr = grandparent;
			}
			else {
				if (curr == parent->right) {
					rotateLeft(parent);
					curr = parent;
					parent = parent->parent;
					grandparent = parent->parent;
				}
				rotateLeftLeft(curr);
				curr = parent;
			}
		}
		else {
			Node* uncle = grandparent->left;
			if (uncle && uncle->isRed) {
				grandparent->isRed = true;
				parent->isRed = false;
				uncle->isRed = false;
				curr = grandparent;
			}
			else {
				if (curr == parent->left) {
					rotateRight(parent);
					curr = parent;
					parent = parent->parent;
				}
				rotateRightRight(curr);
				curr = parent;
			}
		}
	}
	root->isRed = false;
}

RBTree::Node* RBTree::insert(int ID, int placeholder) {
	Data toInsert(placeholder);
	root = insertID(ID, toInsert, root);
	Node* start = searchID(ID, root);
	balanceNodes(start);
	return root;
}

Data RBTree::search(int ID) {
	return searchID(ID, root)->data;
}

void RBTree::debug_printInorder(Node* root) {
	if (!root) {
		return;
	}
	debug_printInorder(root->left);
	cout << root->ID << " ";
	if (root->isRed) {
		cout << "red" << " ";
	}
	else {
		cout << "black" << " ";
	}
	debug_printInorder(root->right);
}

void RBTree::debug_printPreorder(Node* root) {
	if (!root) {
		return;
	}
	cout << root->ID << " ";
	if (root->isRed) {
		cout << "red" << " ";
	}
	else {
		cout << "black" << " ";
	}
	debug_printPreorder(root->left);
	debug_printPreorder(root->right);
}