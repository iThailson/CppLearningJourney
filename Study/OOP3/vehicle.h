#pragma once
#include <string>
#include <iostream>

class Vehicle {
public:
	int type = {}, speed = {};
	Vehicle(int tp);
	int getMaxSpeed();
	std::string getName();
private:
	void setMaxSpeed(int ms);
	void setName(std::string nm);
	std::string name;
	int maxSpeed = {};
	bool started = {};
};

Vehicle::Vehicle(int tp) {
	type = tp;
	if (type == 1) setName("Airplane"), setMaxSpeed(800);
	if (type == 2) setName("Car"), setMaxSpeed(200);
	if (type == 3) setName("Ship"), setMaxSpeed(120);
};

int Vehicle::getMaxSpeed() {
	return maxSpeed;
}

void Vehicle::setMaxSpeed(int ms) {
	maxSpeed = ms;
}

std::string Vehicle::getName() {
	return name;
}

void Vehicle::setName(std::string nm) {
	name = nm;
}