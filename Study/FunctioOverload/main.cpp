#include <iostream>

static void sum() {
	int number1 = 10, number2 = 30;
	std::cout << "The result of adding " << number1 << " and " << number2 << " is: " << (number1 + number2) << "\n";
}

static void sum(int number1, int number2) {
	std::cout << "The result of adding " << number1 << " and " << number2 << " is: " << (number1 + number2) << "\n";
}

int main() {
	sum();
	sum(10, 30);
	return 0;
}


