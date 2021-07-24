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
	Node* insert(int ID, int placeholder);
	Data search(int ID);


	void debug_printInorder(Node* root);
	void debug_printPreorder(Node* root);
};