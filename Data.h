#pragma once
#include <iostream>
using namespace std;

class Data
{
	int placeholder;

public:
	Data();
	Data(int placeholder);
	int getPlaceholder();
	void resetData(int placeholder);
	void printData();
};

