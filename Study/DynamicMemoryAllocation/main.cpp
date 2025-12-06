#include <iostream>

static int* allocateMemory(int size = 0) {
	int* auxiliaryPointer = nullptr;
	auxiliaryPointer = (int*)malloc(size * sizeof(int));
	return auxiliaryPointer;
}

int main() {

	int* vector = nullptr, size = 0;
	printf("Enter a number for the vector size:\n");
	scanf_s(" %d", &size);

	vector = allocateMemory(size);

	for (int i = 0; i < size; i++) {
		system("cls");
		printf("%d. Enter the value of the vector\n", i);
		scanf_s(" %d", &vector[i]);
	};

	for (int i = 0; i < size; i++) {
		printf("%d. Vector value: %d\n", i, vector[i]);
	};

	free(vector);

	return 0;
};