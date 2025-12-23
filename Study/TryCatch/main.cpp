#include <iostream>

double division(double, double);

int main() {
	double n1 = 0, n2 = 0;
	std::cout << "Enter a first number:\n";
	std::cin >> n1;
	std::cout << "Enter a second number:\n";
	std::cin >> n2;

	try {
		std::cout << division(n1, n2);
	}
	catch (const char* msg) {
		std::cout << "Error: " << msg << "\n";
	};

	return 0;
}

double division(double n1, double n2) {
	if (n2 == 0) throw "Because it attempted to divide by 0.";
	return n1 / n2;
}