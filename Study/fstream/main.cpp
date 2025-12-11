#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <limits>

int main() {
	std::fstream file;
	std::string txt;
	std::string line;
	char input = '1';
	int i = 0;

	file.open("Mestick.txt", std::ios::out | std::ios::app);

	while (input == '1') {
		i++;
		std::cout << i << ". Enter a name\n";
		std::cin >> txt;
		file << txt << std::endl;
		system("cls");
		std::cout << i << ". " << txt << std::endl;
		std::cout << "Options:\n1.Enter a new text\n2.Exit\n";

		while (true) {
			std::cin >> input;
			if (input == '1' || input == '2') break;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			system("cls");
			std::cout << "Options:\n1.Enter a new text\n2.Exit\n";
			std::cout << "Enter a valid value\n";
		}
		if (input == '2') break;
		system("cls");
	}

	file.close();
	file.open("Mestick.txt", std::ios::in);

	system("cls");

	if (file.is_open()) std::cout << "Open: Yes\n\n";
	if (!file.is_open()) std::cout << "Open: No\n\n";

	while (std::getline(file, line)) std::cout << line << std::endl;

	file.close();
	return 0;
}
