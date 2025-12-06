#include <iostream>
constexpr int SIZE = 10;

static void queueBuilder(int* back = {}, int* front = {}) {
	*front = 0, * back = -1;
};

static void lineUp(int queue[SIZE], int value = {}, int* back = {}) {
	*back = *back + 1;
	queue[*back] = value;
};

static void stackPrint(int vectorPosision[SIZE]) {
	for (int i = 0; i < SIZE; i++) {
		std::cout << vectorPosision[i] << ' ';
	}
	std::cout << '\n';
}


int main() {
	int front = {}, back = {};
	int queue[SIZE] = {};


	queueBuilder(&back, &front);
	lineUp(queue, 1, &back);
	lineUp(queue, 2, &back);
	lineUp(queue, 3, &back);
	lineUp(queue, 4, &back);
	lineUp(queue, 5, &back);
	lineUp(queue, 6, &back);
	stackPrint(queue);

};