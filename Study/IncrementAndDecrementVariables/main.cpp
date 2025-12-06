#include <iostream>
using namespace std;

int main() {
	int n1 = 0, n2 = 10, n3 = 10, n4 = 10;

	std::cout << "int n1 = 0 | " << n1 << "\n";
	n1 = n1 + 1;
	std::cout << "n1 = n1 + 1 | " << n1 << "\n";
	n1 = n1 - 1;
	std::cout << "n1 = n1 - 1 | " << n1 << "\n";
	n1 += 1;
	std::cout << "n1 += 1; | " << n1 << "\n";
	n1 -= 1;
	std::cout << "n1 -= 1; | " << n1 << "\n";
	n1++;
	std::cout << "n1++; | " << n1 << "\n";
	n1--;
	std::cout << "n1--; | " << n1 << "\n\n";

	std::cout << "n2-10 | " << n1 << "\n";

	n2 *= 2;
	std::cout << "n2*=2; | " << n2 << "\n";
	n2 /= 2;
	std::cout << "n2/=2; | " << n2 << "\n\n";

	std::cout << "n3++ n3=10 | postfixed: " << n3++ << "\n\n";
	std::cout << "++n4 n4=10 | prefixed: " << ++n4 << "\n\n";
	std::cout << "n3++ n3=10 | postfixed: " << n3-- << "\n\n";
	std::cout << "++n4 n4=10 | prefixed: " << --n4 << "\n\n";

	return 0;
};