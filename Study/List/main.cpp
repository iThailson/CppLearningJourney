#include <iostream>
#include <list>


int main() {

	std::list<int> number;
	int SIZE = 10;

	for (int i = 0; i <= SIZE; i++) {
		number.push_front(i);
		std::cout << number.front() << " ";
	}

	std::cout << "\n\n";

	SIZE = number.size()+20;

	for (int i = 0; i < SIZE; i++) {
		number.push_back(i);
		std::cout << number.back() << " ";
	}

	return 0;
};