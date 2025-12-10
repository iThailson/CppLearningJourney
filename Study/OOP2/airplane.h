#pragma once
#include <string>
#include <iostream>

class Airplane {
public:
	int speed = 0, maxSpeed = 0;
	std::string type;
	Airplane(int t);
	void print();
};

Airplane::Airplane(int t) {
	if (t == 1) maxSpeed = 800, type = "Jet";
	if (t == 2) maxSpeed = 350, type = "Single-engine";
	if (t == 3) maxSpeed = 180, type = "Glider";
}

void Airplane::print() {
	std::cout << "Type: " << type << "\n";
	std::cout << "MaxSpeed: " << maxSpeed << "\n";
	std::cout << "Speed: " << speed << "\n";
	std::cout << "-------------------------" << "\n";
}