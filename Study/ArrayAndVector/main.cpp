#include <iostream>
#include <string>
#include <limits>
#include <vector>

int main() {
	long long vector[10]{}, number = 0;
	std::string name[10]{};

	for (int index = 0; index < 10; index++) {
		std::cout << "Index: " << index + 1 << "\n";
		std::cout << "Enter a number:\n";
		std::cin >> number;

		if (std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			system("cls");
			index--;
			std::cout << "Enter a valid number.\n";
			continue;
		}

		system("cls");
		std::cout << "Enter a name:\n";
		std::cin >> name[index];
		system("cls");
		vector[index] = number;
		system("cls");
		std::cout << "Index: " << index + 1 << "\nName: " << name[index] << "\nNumber: " << vector[index] << "\n";
		system("pause");
		system("cls");
	}

	int selection = 0;
	std::cout << "Enter a number from 1 to 10. (0 Exit)\n";
	while (true) {
		std::cin >> selection;

		if (std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			system("cls");
			std::cout << "Enter a valid number from 1 to 10. (0 Exit)\n";
			continue;
		}

		if (selection == 0) {
			break;
		}

		if (selection < 1 || selection > 10) {
			system("cls");
			std::cout << "Enter a valid number from 1 to 10. (0 Exit)\n";
			continue;
		}

		int arrayIndex = selection - 1;
		if (arrayIndex >= 0 && arrayIndex < 10) {
			system("cls");
			std::cout << "Index: " << selection << "\nName: " << name[arrayIndex] << "\nNumber: " << vector[arrayIndex] << "\n";
		}

		system("pause");
		system("cls");
		std::cout << "Enter a number from 1 to 10. (0 Exit)\n";
	}

	return 0;
}
