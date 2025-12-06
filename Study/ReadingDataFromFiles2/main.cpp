#include <string>
#include <iostream>
#include <fstream>
#include <locale>
int main() {
	setlocale(LC_ALL, "pt_BR.UTF-8");
	std::ifstream input("text.txt");
	std::string text{};
	for (std::string line; std::getline(input, line);) {
		text += line + '\n';
	}
	std::cout << text;
	return 0;
};