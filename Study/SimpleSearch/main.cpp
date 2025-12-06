#include <iostream>
#define SIZE 10
int simpleSearch(int matrix[SIZE], int valueSearch) {
	for (int i = 0; i < SIZE; i++) {
		if (matrix[i] == valueSearch) {
			return i;
		}
	}
	return -1;
}
int main() {
	int matrix[SIZE] = { 1, 23, 44, 56, 63, 72, 84, 90, 98, 100 };
	int valueSearch;
	for (int i = 0; i < SIZE; i++) {
		std::cout << matrix[i] << "\n";
	}
	std::cout << "Which number do you want to find?\n";
	std::cin >> valueSearch;
	int pos = simpleSearch(matrix, valueSearch);
	if (pos != -1) {
		std::cout << "Found at position: " << pos << "\n";
	}
	else {
		std::cout << "Not found\n";
	}
	return 0;
}
