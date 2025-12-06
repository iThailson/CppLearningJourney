#include <iostream>
#include <fstream>
#include <string>

int main() {
	std::ofstream text;
	text.open("text.txt");
	text << "";
	text.close();
	return 0;
};