#include "Data.h"

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
