#include <iostream>
#include <new>

int main() {
	int lines = 3, columns = 3;
	int** matrix = nullptr;

	matrix = new int* [lines];
	if (!matrix) return 1;

	for (int i = 0; i < lines; i++) {
		matrix[i] = new int[columns];
		if (!matrix[i]) return 1;
	}

	for (int i = 0; i < lines; i++) {
		for (int j = 0; j < columns; j++) {
			matrix[i][j] = 1;
			std::cout << ' ' << matrix[i][j];
		}
		std::cout << '\n';
	}

	for (int i = 0; i < lines; i++) {
		delete[] matrix[i];
	}
	delete[] matrix;

	return 0;
}
