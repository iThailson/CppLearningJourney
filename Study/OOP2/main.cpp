#include <iostream>
#include "airplane.h"
int main() {
	Airplane* airplane1 = new Airplane(3);
	Airplane* airplane2 = new Airplane(1);
	Airplane* airplane3 = new Airplane(2);
	airplane1->print();
	airplane2->print();
	airplane3->print();
	delete airplane1;
	delete airplane2;
	delete airplane3;
	return 0;
};