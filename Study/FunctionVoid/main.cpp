#include "print.h"

int main() {
	print("---------------\n");
	print(" Hello, World! \n");
	print("---------------\n");
	for (int i = 1; i <= 10; i++) {
		print(std::to_string(i) + "\n");
	};

	return 0;
};