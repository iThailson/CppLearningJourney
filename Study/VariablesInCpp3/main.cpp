#include <iostream>
using namespace std;
int n1 = 11, n2 = 3; //Global variables
int main() {
	int n3 = 5, n4 = 2, result = 0; // Local variables

	std::cout << "Variables Value:\nn1 = 11, n2 = 3, n3 = 5, n4 = 2\n\n";

	result = n1 + n2 + n3 + n4;
	std::cout << "n1 + n2 + n3 + n4;\nOperation Result: " << result << "\n\n";

	result = (n1 + n2 + n3 + n4) - 10;
	std::cout << "(n1 + n2 + n3 + n4) - 10;\nOperation Result: " << result << "\n\n";

	result = n1 + n2 * n4;
	std::cout << "n1+n2*n4;\nOperation Result: " << result << "\n\n";

	result = n1 % n2;
	std::cout << "n1 % n2;\nOperation Result: " << result << "\n\n";

	return 0;
};