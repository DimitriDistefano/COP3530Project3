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

