#include <iostream>
#include <string>

struct word {
	int order{};
	char letter{};
	std::string text;
};

int main() {

	word firstWord;
	firstWord.order = 1;
	firstWord.letter = 'A';
	firstWord.text = "Hello, World!";

	word secondWord;
	secondWord.order = 2;
	secondWord.letter = 'B';
	secondWord.text = "I'm Mestick.";

	std::cout
		<< "Order: " << firstWord.order << '\n'
		<< "Letter: " << firstWord.letter << '\n'
		<< "First Word: " << firstWord.text << '\n';

	std::cout << "\n";

	std::cout
		<< "Order: " << secondWord.order << '\n'
		<< "Letter: " << secondWord.letter << '\n'
		<< "Second Word: " << secondWord.text << '\n';

}
