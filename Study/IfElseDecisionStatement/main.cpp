#include <iostream>
using namespace std;

int main() {
	while (true) {
		char yes = '1';
		char no = '2';
		char brk = '3';
		char result = 0;
		std::cout << "Have you had any water today?\n";
		std::cout << "1.Yes\n2.No\n3.Exit\n";
		std::cin >> result;
		result = tolower(result);
		if (yes == result) {
			system("cls");
			std::cout << "Yes, I drank water today.\n";
		}
		else if (no == result) {
			system("cls");
			std::cout << "No, I haven't drunk any water today.\n";
		}
		else if (brk == result) {
			system("cls");
			std::cout << "No, I want to answer.\n";
			break;
		}
		else {
			system("cls");
			std::cout << "The only valid options are 1, 2, 3.\n";
		}
		;
	};
};