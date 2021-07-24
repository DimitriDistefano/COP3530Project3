#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class HashTable {
	//Not sure what data to work with yet so just an int for now
	vector<vector<int>> table;
	//IDs should be in the form ccdddd, where cc is a 2 digit country ID and dddd is a 4 digit date ID
	void insert(int ID, int data);
	int find(int ID);
};