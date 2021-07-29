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



#include "HashTable.h"
using namespace std;

void HashTable::insert(int ID, int placeholder) {
	Data toInsert(placeholder);
	unsigned int countryID = ID / 10000;
	unsigned int dateID = ID % 10000;
	if (table.size() <= countryID) {
		table.resize(countryID + 1);
	}
	if (table[countryID].size() <= dateID) {
		table[countryID].resize(dateID + 1);
	}
	table[countryID][dateID] = toInsert;
}

Data HashTable::search(int ID) {
	int countryID = ID / 10000;
	int dateID = ID % 10000;
	return table[countryID][dateID];
}