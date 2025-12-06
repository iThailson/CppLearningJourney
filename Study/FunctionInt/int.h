#include <iostream>
#include <string>
#include <limits>

int NumberReturn() {
	std::string s = "";
	int a = 0;
	std::cout << "Enter an integer number:\n";
	while (true) {
		if (!(std::cin >> s)) return 0;
		try {
			size_t pos;
			a = std::stoi(s, &pos);
			if (pos == s.size()) break;
		}
		catch (...) {}
		system("cls");
		std::cout << "Enter a valid integer number:\n";
	}
	system("cls");
	std::cout << "Returned Value: ";
	return a;
}
