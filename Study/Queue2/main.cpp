#include <iostream>
constexpr int SIZE = 10;

static void stackInit(int* top = {}) {
	*top = -1;
}

static void push(int stack[SIZE], int value = {}, int* top = {}) {
	if (*top >= SIZE - 1) return;
	*top = *top + 1;
	stack[*top] = value;
}

static int popShift(int stack[SIZE], int* top = {}) {
	if (*top < 0) return {};
	int value = stack[0];
	for (int i = 0; i < *top; i++) stack[i] = stack[i + 1];
	stack[*top] = {};
	*top = *top - 1;
	return value;
}

static void stackPrint(int v[SIZE]) {
	for (int i = 0; i < SIZE; i++) std::cout << v[i] << ' ';
	std::cout << '\n';
}

int main() {
	int top = {};
	int stack[SIZE] = {};

	stackInit(&top);
	push(stack, 1, &top);
	push(stack, 2, &top);
	push(stack, 3, &top);
	push(stack, 4, &top);
	push(stack, 5, &top);
	push(stack, 6, &top);

	stackPrint(stack);

	popShift(stack, &top);
	stackPrint(stack);
}
