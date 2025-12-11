#include <iostream>
#include <fstream>
#include <string>

int main() {
	std::ofstream output_file;
	output_file.open("Mestick.txt");

	for (int i = 1; i <= 100; ++i) {
		output_file << i << " I love you, May Reach Fortunado\n";
	}

	output_file.close();

	std::ifstream input_file;
	std::string line;

	input_file.open("Mestick.txt");

	if (input_file.is_open()) std::cout << "Open: Yes\n\n";
	if (!input_file.is_open()) std::cout << "Open: No\n\n";

	while (std::getline(input_file, line)) { std::cout << line << std::endl; }

	input_file.close();

	return 0;
}