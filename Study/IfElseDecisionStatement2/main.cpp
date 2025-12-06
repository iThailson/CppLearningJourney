#include <iostream>
using namespace std;
int main() {
	float n1 = 0, n2 = 0, n3 = 0, average = 0;
	char opc = 0;
start:
	system("cls");
	std::cout << "Enter your fisrt note: ";
	std::cin >> n1;
	system("cls");
	std::cout << "Enter your second note: ";
	std::cin >> n2;
	system("cls");
	std::cout << "Enter your third note: ";
	std::cin >> n3;
	system("cls");
	average = (n1 + n2 + n3) / 3;

	if (average >= 4 && average < 7) {
		std::cout << "You made it to the finals.\nStudy harder, decicate yourself to your future.\n";
	}
	else if (average >= 7) {
		std::cout << "You passed with flying colors!\nCongratulations on dedicating yourself to your future.\n";
	}
	else if (average < 4) {
		std::cout << "You failed!\nBut don't give up, try again.\nIt's not a bad result that will destroy your bright future.\n";
	};

valid:
	std::cout << "Would you like to check any other nother?\n1.Yes\n2.No\n";
	std::cin >> opc;
	if (opc == '1') {
		goto start;
	}
	else if (opc == '2') {
		system("cls");
		return 0;
	}
	else if (opc != '1' && opc != '2') {
		system("cls");
		std::cout << "Enter a valid value!\n";
		goto valid;
	};
	return 0;
};