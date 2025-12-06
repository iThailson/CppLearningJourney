#include <iostream>

int main() {

	enum guns {
		rifle = 100, Stir = 8, sniper = 12, shotgun = 1
	};
	guns weaponSelected = rifle;
	std::cout << weaponSelected;
	return 0;
};