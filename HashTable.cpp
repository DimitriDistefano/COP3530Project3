#include "HashTable.h"
using namespace std;

void HashTable::insert(int ID, int data) {
	int countryID = ID / 10000;
	int dateID = ID % 10000;
	if (table.size() <= countryID) {
		table.resize(countryID);
	}
	if (table[countryID].size() <= dateID) {
		table[countryID].resize(dateID);
	}
	table[countryID][dateID] = data;
}

int HashTable::find(int ID) {
	int countryID = ID / 10000;
	int dateID = ID % 10000;
	return table[countryID][dateID];
}