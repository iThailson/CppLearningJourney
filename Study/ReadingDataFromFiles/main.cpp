#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>


int main() {
	int c;

	std::string text{};
	std::cout << "Enter text:\n";
	std::getline(std::cin, text);

	std::ofstream OutputFile("text.txt", std::ios_base::app);
	OutputFile << text;
	OutputFile.close();

	FILE* file = nullptr;

	if (fopen_s(&file, "text.txt", "r") == 0 && file) {
		while ((c = getc(file)) != EOF) {
			std::cout << static_cast<char>(c);
		}
		fclose(file);
	}

	return 0;
}
