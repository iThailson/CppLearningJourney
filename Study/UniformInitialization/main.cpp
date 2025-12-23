#include <iostream>
#include <string>
#include <vector>
#include <map>

struct People {
	std::string name;
	int age;
};

class Vehicle {
public:
	int type;
	std::string name;
};

int main() {
	int vector[]{ 1,2,3,4,5,6,7,8,9 };
	int number{ 10 };
	std::string name{ "Mestick" };
	std::vector <int> values{ 1,2,3,4,5 };
	std::map<std::string, std::string>capitals{ {"MG","Belo Horizonte"} };

	People p1{ "Thailson", 23 };

	Vehicle v1{ 1,"Carango" };

	std::cout << number << "\n";
	std::cout << name << "\n";

	for (std::vector<int>::iterator it = values.begin(); it != values.end(); ++it) {
		std::cout << *it << "\n";
	}

	std::cout << p1.name << " \n " << p1.age << "\n";
	std::cout << v1.type << " - " << v1.name << "\n";

	for (size_t i = 0; i <= 8; ++i)
	{
		std::cout << vector[i] << "\n";
	}


	return 0;
}