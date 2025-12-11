#pragma once
#include <iostream>

class Base1 {
public:
	void printBase1();
};

void Base1::printBase1() {
	std::cout << "print base1" << std::endl;
};

class Base2 {
public:
	void printBase2();
};

void Base2::printBase2() {
	std::cout << "print base2" << std::endl;
};

class Mestick : public Base1, public Base2 {

};