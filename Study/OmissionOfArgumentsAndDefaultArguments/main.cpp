#include <iostream>
#include <string>

static void print(std::string txt = {}) {
	std::cout << txt << "\n";
};

int main() {
	print();
	return 0;
};

