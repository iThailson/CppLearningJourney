#include <iostream>
#include <fstream>
#include <string>

int main() {
	std::string text{};
	std::cout << "Enter text:\n";
	std::getline(std::cin, text);
	std::ofstream OutputFile("text.txt", std::ios_base::app);
	OutputFile << text;
};