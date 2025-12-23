#include <iostream>
#include <vector>


void sum() {
	static auto i = 0;
	i++;
	std::cout << i << std::endl;
}

int main() {

	register int counter{};

	for (counter = 0; counter < 10; ++counter) {
		std::cout << counter << "\n";
	}

	std::vector<int>v{ 10,20,30,40,50,60,70 };

	for (register auto it = v.begin(); it != v.end(); ++it) {
		std::cout << *it << "\n";
	}

	sum();
	sum();
	sum();
	sum();
	sum();
	sum();

	return 0;
}