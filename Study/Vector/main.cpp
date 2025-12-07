#include <iostream>
#include <vector>

int main() {

	std::vector<int> number1{};
	std::vector<int> number2{};
	int size1 = {}; int size2 = {};

	number1.push_back(1);
	number1.push_back(2);
	number1.push_back(3);
	number1.push_back(4);
	number1.push_back(5);


	number2.push_back(6);
	number2.push_back(7);
	number2.push_back(8);
	number2.push_back(9);
	number2.push_back(10);

	//number1.swap(number2);

	number1.insert(number1.end() - 1, 888);
	number1.erase(number1.end() - 2);

	size1 = number1.size();
	size2 = number2.size();

	std::cout << "First value number1: " << number1.front() << "\n";
	std::cout << "Midle value number1: " << number1.at(size1 / 2) << "\n";
	std::cout << "Last value number1: " << number1.back() << "\n";

	for (int i = 0; i < size1; ++i) {
		std::cout << number1[i] << " ";
	}
	std::cout << "\n";
	for (int i = 0; i < size2; ++i) {
		std::cout << number2[i] << " ";
	}

	while (!number1.empty()) {
		number1.pop_back();
	}

	std::cout << "\nNumber size: " << number1.size();

	return 0;
}