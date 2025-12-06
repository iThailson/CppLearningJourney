#include <iostream>

int main() {
	int i = 0;
	do {
		i++;
		std::cout << "i: " << i << "\n";
	} while (i > 5);
	int o = 0;
	do {
		o++;
		std::cout << "o: " << o << "\n";
	} while (o < 5);
	return 0;
};