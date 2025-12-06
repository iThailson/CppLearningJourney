#include <iostream>
#include <limits>
int main() {
	int number = 0, divisors = 0;
	std::string text = "";
	std::cout << "Enter a number to test (0 to exit):\n";
	while (true) {
		std::cin >> number;

		if (number == 0) {
			system("cls");
			std::cout << "Finalized Program.\n";
			return 0;
		};

		if (std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			system("cls");
			std::cout << "Enter a valid number:\n";
			continue;
		}

		for (int i = 2; i < number; i++) {
			if (number % i == 0) {
				divisors++;
			}
		}

		if (divisors == 0) {
			system("cls");
			std::cout << number << " is a prime number.\n";
			std::cout << "Enter a number to test (0 to exit):\n";
		}
		else {
			system("cls");
			std::cout << number << " is not a prime number.\n";
			std::cout << "Enter a number to test (0 to exit):\n";
			divisors = 0;
		}
	}
	return 0;
}
