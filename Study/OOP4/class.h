#pragma once

class Vehicle {
public:
	std::string name = {};
	std::string msgArms = {};
	int speed = {}, armor = {}, wheels = {};
	void setType(int tp);
	void setMaxSpeed(int ms);
	void setArms(bool ar);
	void print();
private:
	int type = {}, maxSpeed = {};
	bool arms = {};
};

void Vehicle::print() {
	if (type == 1)name = "Motorbike";
	if (type == 2)name = "Car";
	if (type == 3)name = "Ship";
	arms ? msgArms = "Vehicle with weapons" : msgArms = "Vehicle without weapons";
	std::cout
		<< "\nType: " << name
		<< "\nMax Speed: " << maxSpeed
		<< "\nNumber of wheels: " << wheels
		<< "\nArmor Level : " << armor
		<< "\nWeaponry: " << msgArms << "\n";
}

void Vehicle::setType(int tp) {
	type = tp;
}

void Vehicle::setMaxSpeed(int ms) {
	maxSpeed = ms;
}

void Vehicle::setArms(bool ar) {
	arms = ar;
}

class Motorbike :public Vehicle {
public:
	Motorbike();
};

Motorbike::Motorbike() {
	speed = 0;
	armor = 0;
	wheels = 2;
	setType(1);
	setMaxSpeed(120);
	setArms(false);
}

class Car :public Vehicle {
public:
	Car();
};

Car::Car() {
	speed = 0;
	armor = 0;
	wheels = 4;
	setType(2);
	setMaxSpeed(320);
	setArms(false);
}

class Ship :public Vehicle {
public:
	Ship();
};

Ship::Ship() {
	speed = 0;
	armor = 100;
	wheels = 0;
	setType(3);
	setMaxSpeed(250);
	setArms(true);
}