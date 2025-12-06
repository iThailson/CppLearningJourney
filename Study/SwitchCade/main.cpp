#include <iostream>
#include <limits>
int main() {
	int input = 0;
	while (true) {
		std::cout << "What your favore color?\n1.Blue\n2.Red\n3.Green\n4.Black\n5.White\n6.Yellow\n7.Purple\n8.Orange\n9.Exit\n";
		std::cin >> input;
		system("cls");
		if (std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			system("cls");
			std::cout << "Enter a valid number.\n";
		};
		switch (input) {
		case 1:
			system("cls");
			std::cout << "Your favorite color is Blue!\n";
			break;
		case 2:
			system("cls");
			std::cout << "Your favorite color is Red!\n";
			break;
		case 3:
			system("cls");
			std::cout << "Your favorite color is Green!\n";
			break;
		case 4:
			system("cls");
			std::cout << "Your favorite color is Black!\n";
			break;
		case 5:
			system("cls");
			std::cout << "Your favorite color is White!\n";
			break;
		case 6:
			system("cls");
			std::cout << "Your favorite color is Yellow!\n";
			break;
		case 7:
			system("cls");
			std::cout << "Your favorite color is Purple!\n";
			break;
		case 8:
			system("cls");
			std::cout << "Your favorite color is Orange!\n";
			break;
		case 9:
			return 0;
		default:
			system("cls");
			std::cout << "Enter a valid number.\n";
		};
	};
	return 0;
};