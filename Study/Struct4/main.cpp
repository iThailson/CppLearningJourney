#include <iostream>;
#include <string>;
#include <new>
struct Car {
	std::string name, color; int horsepower, maxSpeed, speed;
	void insert(std::string stname, std::string stcolor, int sthorsepower, int stMaxSpeed) {
		name = stname; color = stcolor; horsepower = sthorsepower; maxSpeed = stMaxSpeed; speed = 0;
	}
	void show() const {
		std::cout << "\n" << name << "\n";
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
	Car* Cars = new Car[5];
	Car car1, car2, car3, car4, car5;
	Cars[0] = car1; Cars[1] = car2; Cars[2] = car3; Cars[3] = car4; Cars[4] = car5; 
	Cars[0].insert("Mitsubishi Eclipse GSX", "Green", 140, 210);
	Cars[1].insert("Toyota Supra MKIV", "Orange", 320, 298);
	Cars[2].insert("Skyline R34 GT-R", "Silver", 320, 250);
	Cars[3].insert("Subaru Impreza", "Gold", 230, 235);
	Cars[4].insert("Dodge Charger R/T", "Preto", 425, 225);
	Cars[0].velocity(120);
	Cars[1].velocity(180);
	Cars[2].velocity(220);
	Cars[3].velocity(150);
	Cars[4].velocity(200);
	std::cout << "List of Cars\n";
	for (int i = 0; i < 5; ++i) {
		Cars[i].show();
	}
	return 0;
}