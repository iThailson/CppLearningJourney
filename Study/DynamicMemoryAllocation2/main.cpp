#include <iostream>
#include <new>

int main() {

	int size = 0;

	std::cout << "Enter a number for the vector size:\n";
	std::cin >> size;

	int* vector = new int[size];

	for (int i = 0; i < size; i++) {
		system("cls");
		std::cout << i << ". Enter the value of the vector\n";
		std::cin >> vector[i];
	};

	for (int i = 0; i < size; i++) {
		std::cout << i << ". Vector value: " << vector[i] << "\n";
	};

	free(vector);

	return 0;
};