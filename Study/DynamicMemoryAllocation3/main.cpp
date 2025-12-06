#include <stdio.h>
#include <stdlib.h>

int main() {
	int** matrix = NULL;
	int lines = 3, columns = 3;

	matrix = (int**)malloc(lines * sizeof(int*));
	if (!matrix) return 1;

	for (int i = 0; i < lines; i++) {
		matrix[i] = (int*)malloc(columns * sizeof(int));
		if (!matrix[i]) return 1;
	}

	for (int i = 0; i < lines; i++) {
		for (int j = 0; j < columns; j++) {
			matrix[i][j] = 1;
			printf(" %d", matrix[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < lines; i++) free(matrix[i]);
	free(matrix);

	return 0;
}
