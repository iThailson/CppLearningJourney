#include <iostream>

int main() {
	int* pointer = {};
	int vector[10]{};
	pointer = &vector[0];
	std::cout << pointer << "\n" << &vector << "\n";
	*pointer = 10;
	*(pointer += 1) = 20;
	*(pointer += 1) = 30;
	std::cout << vector[0] << "\n";
	std::cout << vector[1] << "\n";
	std::cout << vector[2] << "\n";
	return 0;
};