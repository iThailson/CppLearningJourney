#include <iostream>

char board[3][3] = {
	{ '1', '2', '3' },
	{ '4', '5', '6' },
	{ '7', '8', '9' }
};

static void resetBoard() {
	char v = '1';
	for (int i = 0; i < 3; ++i)
		for (int j = 0; j < 3; ++j)
			board[i][j] = v++;
}

static void printBoard() {
#ifdef _WIN32
	system("cls");
#else
	system("clear");
#endif
	std::cout << "\n";
	std::cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << "\n";
	std::cout << "---+---+---\n";
	std::cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << "\n";
	std::cout << "---+---+---\n";
	std::cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << "\n";
	std::cout << "\n";
}

static char checkWinner() {
	for (int i = 0; i < 3; ++i)
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
			return board[i][0];
	for (int j = 0; j < 3; ++j)
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j])
			return board[0][j];
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
		return board[0][0];
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
		return board[0][2];
	return ' ';
}

static bool isDraw() {
	for (int i = 0; i < 3; ++i)
		for (int j = 0; j < 3; ++j)
			if (board[i][j] != 'X' && board[i][j] != 'O')
				return false;
	return true;
}

static bool makeMove(char player) {
	int pos;
	std::cout << "Player " << player << ", choose a position (1-9): ";
	if (!(std::cin >> pos)) return false;
	if (pos < 1 || pos > 9) {
		std::cout << "Invalid position.\n";
		return false;
	}
	int row = (pos - 1) / 3;
	int col = (pos - 1) % 3;
	if (board[row][col] == 'X' || board[row][col] == 'O') {
		std::cout << "Position already taken.\n";
		return false;
	}
	board[row][col] = player;
	return true;
}

int main() {
	int winsX = 0, winsO = 0;
	char current = 'X';
	while (true) {
		resetBoard();
		current = 'X';
		while (true) {
			printBoard();
			std::cout << "Score - X: " << winsX << " | O: " << winsO << "\n\n";
			if (!makeMove(current)) {
				if (!std::cin) return 0;
				continue;
			}
			char winner = checkWinner();
			if (winner == 'X' || winner == 'O') {
				printBoard();
				if (winner == 'X') ++winsX; else ++winsO;
				std::cout << "Player " << winner << " wins!\n";
				std::cout << "Score - X: " << winsX << " | O: " << winsO << "\n";
				break;
			}
			if (isDraw()) {
				printBoard();
				std::cout << "Draw!\n";
				std::cout << "Score - X: " << winsX << " | O: " << winsO << "\n";
				break;
			}
			current = (current == 'X') ? 'O' : 'X';
		}
		std::cout << "Play again? (y/n): ";
		char again;
		if (!(std::cin >> again)) return 0;
		if (again != 'y' && again != 'Y') break;
	}
	return 0;
}
