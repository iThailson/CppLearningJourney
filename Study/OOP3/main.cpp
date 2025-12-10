#include <iostream>
#include "vehicle.h"

int main() {
	Vehicle* vehicle1 = new Vehicle(1);
	Vehicle* vehicle2 = new Vehicle(2);
	Vehicle* vehicle3 = new Vehicle(3);
	std::cout << "Type: " << vehicle1->getName() << "\n" << vehicle1->getMaxSpeed() << "km\n\n";
	std::cout << "Type: " << vehicle2->getName() << "\n" << vehicle2->getMaxSpeed() << "km\n\n";
	std::cout << "Type: " << vehicle3->getName() << "\n" << vehicle3->getMaxSpeed() << "km\n\n";
	return 0;
};