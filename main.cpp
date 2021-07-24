#include <iostream>
#include <vector>
#include <string>
#include "HashTable.h"
#include "RBTree.h"
using namespace std;

int main() {
	RBTree tree;
	HashTable table;
	string input;
	cin >> input;
	int num = stoi(input);
	for(int i = 0; i < num; i++){
		cin >> input;
		if (input == "insert") {
			cin >> input;
			table.insert(stoi(input), stoi(input));
			tree.insert(stoi(input), stoi(input));
		}
		else if(input == "in") {
			tree.debug_printInorder(tree.root);
		}
		else if (input == "pre") {
			tree.debug_printPreorder(tree.root);
		}
		else if (input == "search") {
			cin >> input;
			cout << "Data from table: " << endl;
			table.search(stoi(input)).printData();
			cout << "Data from tree: " << endl;
			tree.search(stoi(input)).printData();
		}
	}
}