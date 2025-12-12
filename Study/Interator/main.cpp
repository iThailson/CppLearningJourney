#include <iostream>
#include <vector>
#include <string>

int main() {
	std::vector<std::string>product = { "mouse","keyboard","monitor","headset" };
	std::vector<std::string>::iterator it;

	it = product.begin();
	std::advance(it, 2);
	std::cout << *it << std::endl;

	return 0;
}