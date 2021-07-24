#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Data.h"
using namespace std;

class HashTable {
	//Not sure what data to work with yet so just an int for now
	vector<vector<Data>> table;
	//IDs should be in the form ccdddd, where cc is a 2 digit country ID and dddd is a 4 digit date ID
public:
	void insert(int ID, int placeholder);
	Data search(int ID);
};