#include <iostream>

constexpr auto SIZE = 10;

void stackPrint(int stack[SIZE], int top) {
	if (top == -1) {
		std::cout << "Stack empty\n";
		return;
	}
	for (int i = 0; i <= top; ++i) {
		std::cout << stack[i] << ' ';
	}
	std::cout << '\n';
}

void stackPush(int stack[SIZE], int value, int* top) {
	if (*top == SIZE - 1) {
		std::cout << "Stack full. Value " << value << " not pushed.\n";
	}
	else {
		*top = *top + 1;
		stack[*top] = value;
	}
}

void stackPop(int stack[SIZE], int* top) {
	if (*top == -1) {
		std::cout << "Stack empty. Nothing removed.\n";
	}
	else {
		std::cout << "Removed value " << stack[*top]
			<< " from position " << *top << '\n';
		*top = *top - 1;
	}
}

int main() {
	int stack[SIZE] = {};
	int top = -1;

	stackPrint(stack, top);

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

	stackPrint(stack, top);

	stackPop(stack, &top);
	stackPop(stack, &top);
	stackPop(stack, &top);

	stackPrint(stack, top);

	return 0;
}
