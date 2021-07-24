#include "HashTable.h"
using namespace std;

void HashTable::insert(int ID, int placeholder) {
	Data toInsert(placeholder);
	int countryID = ID / 10000;
	int dateID = ID % 10000;
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