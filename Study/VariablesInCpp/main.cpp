#include <iostream>
#include <string>
#include <locale>
using namespace std;

int main() {
	setlocale(LC_ALL, "");
	int inumber = 0; // Integer number
	float fnumber = 0.000; //  Floating number
	double bnumber = 0.00; // Double decimal number
	bool boolean = true; // True or false
	string name = ""; // Text string
	char letter = ' '; // One-byte string
	std::cout << "Enter an integer:\n";
	std::cin >> inumber;
	std::cout << "Enter a floating number:\n";
	std::cin >> fnumber;
	std::cout << "Enter a double decimal number:\n";
	std::cin >> bnumber;
	std::cout << "Enter a Boolean value: (0 or 1)\n";
	std::cin >> boolean;
	std::cout << "Enter a word:\n";
	std::cin >> name;
	std::cout << "Enter a letter:\n";
	std::cin >> letter;
	std::cout
		<< "\nInteger number: " << inumber << "\n"
		<< "Floating number: " << fnumber << "\n"
		<< "Double decimal number: " << bnumber << "\n"
		<< "True or false: " << boolean << "\n"
		<< "Text string: " << name << "\n"
		<< "One-byte string: " << letter << "\n";
	return 0;
};