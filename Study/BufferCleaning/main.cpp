#include <iostream>
#include <limits>
#include <ios>

int main() {
	char phrase[255];
	std::cout << "Enter a phrase:\n";
	std::cin.sync();
	std::cin.getline(phrase, 255);
	std::cout << "Your phrase:\n" << phrase;
	return 0;
};