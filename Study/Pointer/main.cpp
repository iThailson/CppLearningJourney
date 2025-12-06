#include <iostream>

int main() {

	int number = 0;
	int* pointer = &number;

	*pointer = 40;

	std::cout << "Pointer: " << *pointer;

	return 0;
};