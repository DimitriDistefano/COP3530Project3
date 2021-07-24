#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Data.h"
using namespace std;

class HashTable {
	vector<vector<Data>> table;
	//IDs should be in the form ccdddd, where cc is a 2 digit country ID and dddd is a 4 digit date ID
public:
	//Change placeholder for whatever Data needs
	void insert(int ID, int placeholder);
	Data search(int ID);
};