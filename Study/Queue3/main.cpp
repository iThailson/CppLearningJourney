#include <iostream>
#include <string>
#include <queue>

int main() {

	std::queue <std::string> card;

	card.push("King Of Heats");
	card.push("King Of Spades");
	card.push("King Of Diamonds");
	card.push("King Of Clubs");

	std::cout << "Queue size: " << card.size() << "\n";
	std::cout << "First Card: " << card.front() << "\n";
	std::cout << "Last Card: " << card.back() << "\n\n";

	while (!card.empty()) {
		std::cout << "First Card" << card.front() << "\n";
		card.pop();
	}

	return 0;
}