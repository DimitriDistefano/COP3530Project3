#pragma once
#include <iostream>
using namespace std;

class dataNode
{
	//Just placeholder values, add whatever values are needed
	int placeholder = -1;

public:
	dataNode();
	dataNode(int placeholder);
	int getPlaceholder();
	void resetdataNode(int placeholder);
	void printdataNode();
};

dataNode::dataNode() {
	this->placeholder = -1;
}

dataNode::dataNode(int placeholder) {
	this->placeholder = placeholder;
}

int dataNode::getPlaceholder() {
	return placeholder;
}

void dataNode::resetdataNode(int placeholder) {
	this->placeholder = placeholder;
}

void dataNode::printdataNode() {
	cout << placeholder << endl;
}
