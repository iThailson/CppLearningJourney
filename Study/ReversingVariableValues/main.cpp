#include <iostream>
using namespace std;

int main() {

	int n1 = 10, n2 = 10, n3 = 10;

	std::cout << "int n1 = 10; | " << n1 << "\n";
	n1 = n1 * -1;
	std::cout << "n1 = n1 * -1; | " << n1 << "\n\n";

	std::cout << "int n2 = 10; | " << n2 << "\n";
	std::cout << "-n2; | " << -n2 << "\n"; // Temporary inversion, not saved in variable
	std::cout << "n2; | " << n2 << "\n\n";

	std::cout << "int n3 = 10; | " << n3 << "\n";
	n3 = -n3;
	std::cout << "n3 = -n3; | " << n3 << "\n";



	return 0;
};
