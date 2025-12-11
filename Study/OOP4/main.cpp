#include <iostream>
#include "class.h"

int main() {
	Motorbike* v1 = new Motorbike;
	Car* v2 = new Car;
	Ship* v3 = new Ship;
	v1->print();
	v2->print();
	v3->print();
}