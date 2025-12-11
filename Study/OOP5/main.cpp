#include <iostream>
#include "class.h"

int main() {
	Base1* obj1 = new Base1();
	Base2* obj2 = new Base2();
	Mestick* obj3 = new Mestick();
	obj1->printBase1();
	obj2->printBase2();
	obj3->printBase1();
	obj3->printBase2();
	return 0;
}