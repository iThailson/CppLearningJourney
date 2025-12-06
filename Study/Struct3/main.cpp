#include <iostream>
#include <string>
struct Car {
	std::string name, color; int horsepower, maxSpeed, speed;
	void insert(std::string stname, std::string stcolor, int sthorsepower, int stMaxSpeed) {
		name = stname; color = stcolor; horsepower = sthorsepower; maxSpeed = stMaxSpeed; speed = 0;
	}
	void show() const {
		std::cout << name << "\n";
		std::cout << "Color: " << color << "\n";
		std::cout << "Horsepower: " << horsepower << "\n";
		std::cout << "Current speed: " << speed << "Km\n";
		std::cout << "Max speed: " << maxSpeed << "Km\n";
	}
	void velocity(int moveSpeed) {
		speed = moveSpeed;
		if (speed > maxSpeed) speed = maxSpeed;
		if (speed < 0) speed = 0;
	}
};
int main() {
	Car Porshe, Mustang, Ferrari;
	std::cout << "List of Cars\n";
	Porshe.insert("\nPorsche 911", "Blue", 541, 312);
	Porshe.velocity(250);
	Porshe.show();
	Mustang.insert("\nMustang ", "Black", 507, 290);
	Mustang.velocity(195);
	Mustang.show();
	Ferrari.insert("\nFerrari 296 GTB", "Red", 880, 330);
	Ferrari.velocity(300);
	Ferrari.show();
	return 0;
}