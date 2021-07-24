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
	Node* insertRB(int ID);

	void printInorder(Node* root);
	void printPreorder(Node* root);
};