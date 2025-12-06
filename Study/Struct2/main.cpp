#include <iostream>
#include <string>

struct Car {
	std::string name = {}, color = {};
	int potency = {}, maxSpeed = {};
};

int main() {

	Car Porshe, Mustang, FiatUno;

	Porshe.name = "Porsche Panamera";
	Porshe.color = "Blue";
	Porshe.potency = 782;
	Porshe.maxSpeed = 325;

	Mustang.name = "Mustang Dark Horse";
	Mustang.color = "Black";
	Mustang.potency = 492;
	Mustang.maxSpeed = 250;

	FiatUno.name = "Fiat Uno";
	FiatUno.potency = 492;
	FiatUno.maxSpeed = 250;

	std::cout << "Name:" << FiatUno.name << "\n\n";

	std::cout << "Enter a color for the car:\n";
	std::cin >> FiatUno.color;

	std::cout << "Enter the potency:\n";
	std::cin >> FiatUno.potency;

	std::cout << "Enter the max speed:\n";
	std::cin >> FiatUno.maxSpeed;

	std::cout << "\n"
		<< Porshe.name << "\n"
		<< "Name: " << Porshe.name << "\n"
		<< "Color: " << Porshe.color << "\n"
		<< "Potency: " << Porshe.potency << "\n"
		<< "Max Speed: " << Porshe.maxSpeed << "\n\n";
	std::cout
		<< Mustang.name << "\n"
		<< "Name: " << Mustang.name << "\n"
		<< "Color: " << Mustang.color << "\n"
		<< "Potency: " << Mustang.potency << "\n"
		<< "Max Speed: " << Mustang.maxSpeed << "\n\n";

	std::cout
		<< FiatUno.name << "\n"
		<< "Name: " << FiatUno.name << "\n"
		<< "Color: " << FiatUno.color << "\n"
		<< "Potency: " << FiatUno.potency << "\n"
		<< "Max Speed: " << FiatUno.maxSpeed << "\n\n";


	return 0;
}