#include <iostream>

int main() {
	char word[255] = {}, letter[1] = {}, secret[255] = {}; int hits = {}, index = {}, size = {}, chances = 6; bool accuracy = false;
	std::cout << "Enter a secret a word: \n";
	std::cin >> word;

	for (index = 0; word[index] != '\0'; index++) {
		word[index] = tolower(word[index]);
	}

	system("cls");

	index = 0;
	while (word[index] != '\0') {
		index++;
		size++;
	}

	for (index = 0; index < 255; index++) {
		secret[index] = '-';
	}

	while ((chances > 0) && (hits < size)) {
		std::cout << "Remaining chances: " << chances << "\n\n";
		std::cout << "Secret Word:\n";
		for (index = 0; index < size; index++) {
			std::cout << secret[index];
		}
		std::cout << "\nEnter a letter:\n";
		std::cin >> letter[0];
		letter[0] = tolower(letter[0]);

		for (index = 0; index < size; index++) {
			if (word[index] == letter[0]) {
				accuracy = true;
				secret[index] = word[index];
				hits++;
			}
		}

		if (!accuracy) {
			chances--;
		}
		accuracy = 0;
		system("cls");
	}

	if (hits == size) {
		std::cout << "Congratulations, you won!\n";
		std::cout << "You got the word right\n";
		std::cout << "The secreat word is: ";
		for (index = 0; index < size; index++) {
			std::cout << secret[index];
		}
	}
	else {
		std::cout << "You loser!";
	};

	return 0;
}