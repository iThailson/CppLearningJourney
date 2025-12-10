#include <iostream>
#include "vehicle.h"

int main() {
	Vehicle* v1 = new Vehicle(1);
	Vehicle* v2 = new Vehicle(2);
	Vehicle* v3 = new Vehicle(3);

	std::cout
		<< "Type: " << v1->getName()
		<< "\nStatus: " << (v1->getStarted() ? "On" : "Off")
		<< "\nMax Speed: " << v1->getMaxSpeed() << "km\n\n";

	std::cout
		<< "Type: " << v2->getName()
		<< "\nStatus: " << (v2->getStarted() ? "On" : "Off")
		<< "\nMax Speed: " << v2->getMaxSpeed() << "km\n\n";

	std::cout
		<< "Type: " << v3->getName()
		<< "\nStatus: " << (v3->getStarted() ? "On" : "Off")
		<< "\nMax Speed: " << v3->getMaxSpeed() << "km\n\n";

	return 0;
};