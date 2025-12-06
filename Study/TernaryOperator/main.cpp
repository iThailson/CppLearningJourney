#include <iostream>
int main() {
start:
	float n1 = 0.00f, n2 = 0.00f, n3 = 0.00f, average = 0.00f;
	char answer = 0;
	system("cls");
	std::cout << "Enter Your first note: ";
	std::cin >> n1;
	system("cls");
	std::cout << "Enter Your second note: ";
	std::cin >> n2;
	system("cls");
	std::cout << "Enter Your third note: ";
	std::cin >> n3;
	system("cls");
	average = (n1 + n2 + n3) / 3;
	average >= 7 ?
		(std::cout << "Your score was greater than or equal t 7, you passed!\n") :
		(std::cout << "Your score was below 7, you failed.");

menu:
	std::cout << "\nWould you like to test another note?\n";
	std::cout << "1.Yes\n2.No\n";
	std::cin >> answer;
	if (answer == '1') { system("cls"); goto start; }
	else if (answer == '2') { return 0; }
	else if (answer != '1' && answer != '2') {
		system("cls");
		std::cout << "Enter an valid value.";
		goto menu;
	};
	goto start;
	return 0;
};