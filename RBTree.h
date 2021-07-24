#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class RBTree {
public:
	class Node {
	public:
		bool isRed;
		int ID;
		Node* parent;
		Node* left = nullptr;
		Node* right = nullptr;
		Node();
		Node(int ID);
	};
	Node* root = nullptr;

private:
	void rotateLeft(Node* curr);
	void rotateRight(Node* curr);
	void balanceNodes(Node* currNode);

	void rotateLeftLeft(Node* curr);
	void rotateRightRight(Node* curr);
public:
	Node* insertID(int ID, Node* currNode);
	Node* searchID(int ID, Node* root);
	//IDs should be in the form ccdddd, where cc is a 2 digit country ID and dddd is a 4 digit date ID
	Node* insert(int ID);
	Node* search(int ID);


	void debug_printInorder(Node* root);
	void debug_printPreorder(Node* root);
};