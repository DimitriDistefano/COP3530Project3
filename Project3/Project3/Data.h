#pragma once
#include <iostream>
using namespace std;

class Data
{
	//Just placeholder values, add whatever values are needed
	int placeholder;

public:
	Data();
	Data(int placeholder);
	int getPlaceholder();
	void resetData(int placeholder);
	void printData();
};

Data::Data() {
	this->placeholder = -1;
}

Data::Data(int placeholder) {
	this->placeholder = placeholder;
}

int Data::getPlaceholder() {
	return placeholder;
}

void Data::resetData(int placeholder) {
	this->placeholder = placeholder;
}

void Data::printData() {
	cout << placeholder << endl;
}
