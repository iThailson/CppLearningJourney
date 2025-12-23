#include <iostream>
#include "variable.h"

int number{ 50 };
extern int value;

void printNumber();

int main() {
	printNumber();
	std::cout << value << "\n";
	std::cout << tmp << "\n";
	return 0;
}