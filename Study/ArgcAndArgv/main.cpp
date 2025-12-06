#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
	if (argc < 2) {
		std::cout << "No argument provided.\n";
		return 1;
	}

	std::cout << argv[1];

	if (!strcmp(argv[1], "mestick2501")) {
		std::cout << "\nSecret Key Accepted.\n";
	}
	else {
		std::cout << "\nInvalid Key.\n";
	}
	return 0;
}
