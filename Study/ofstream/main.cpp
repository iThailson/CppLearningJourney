#include <iostream>
#include <fstream>

int main() {
	float pi = 3.14;
	std::ofstream file;
	file.open("Mestick.txt");
	for (int i = 1; i <= 100; ++i) {
		file << i << " I love you, May Reach Fortunado!" << std::endl;
	}
	file.close();
	return 0;
}