#include <iostream>

constexpr auto SIZE = 10;

void stackPrint(int vectorPosision[SIZE]) {
	for (int i = 0; i < SIZE; i++) {
		std::cout << vectorPosision[i] << ' ';
	}
	std::cout << '\n';
}

void stackPush(int stack[SIZE] = {}, int value = {}, int* top = {}) {
	if (*top == SIZE - 1) {
		std::cout << "Stack full. Value " << value << " not pushed.\n";
	}
	else {
		*top = *top + 1;
		stack[*top] = value;
	}
}

int main() {
	int stack[SIZE] = {};
	int top = -1;

	stackPrint(stack);

	stackPush(stack, 1, &top);
	stackPush(stack, 2, &top);
	stackPush(stack, 3, &top);
	stackPush(stack, 4, &top);
	stackPush(stack, 5, &top);
	stackPush(stack, 6, &top);
	stackPush(stack, 7, &top);
	stackPush(stack, 8, &top);
	stackPush(stack, 9, &top);
	stackPush(stack, 10, &top);
	stackPush(stack, 11, &top);
	stackPush(stack, 12, &top);
	stackPush(stack, 13, &top);
	stackPush(stack, 14, &top);

	stackPrint(stack);

	return 0;
}
