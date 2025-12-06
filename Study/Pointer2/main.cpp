#include <iostream>
#include <string>
int main() {
	std::string Vehicle = "Car";
	std::string* Pointer;
	Pointer = &Vehicle;
	std::cout << Pointer << "\n" << &Vehicle << "\n";
	*Pointer = "Motorbike";
	std::cout << *Pointer << "\n" << Vehicle << "\n";
	return 0;
};