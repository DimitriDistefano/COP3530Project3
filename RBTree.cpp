#include "RBTree.h"

RBTree::Node::Node() {
	ID = -1;
	parent = nullptr;
	isRed = true;
}

RBTree::Node::Node(int ID) {
	this->ID = ID;
	parent = nullptr;
	isRed = true;
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

RBTree::Node* RBTree::insertID(int ID, Node* curr) {
	if (!curr) {
		return new Node(ID);
	}

	else if (ID < curr->ID) {
		curr->left = insertID(ID, curr->left);
		curr->left->parent = curr;
	}

	else if (ID > curr->ID) {
		curr->right = insertID(ID, curr->right);
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

RBTree::Node* RBTree::insertRB(int ID) {
	root = insertID(ID, root);
	Node* start = searchID(ID, root);
	balanceNodes(start);
	return root;
}

void RBTree::printInorder(Node* root) {
	if (!root) {
		return;
	}
	printInorder(root->left);
	cout << root->ID << " ";
	if (root->isRed) {
		cout << "red" << " ";
	}
	else {
		cout << "black" << " ";
	}
	printInorder(root->right);
}

void RBTree::printPreorder(Node* root) {
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
	printPreorder(root->left);
	printPreorder(root->right);
}