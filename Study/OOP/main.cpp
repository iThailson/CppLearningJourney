#include <iostream>
#include <string>
class Airplane {
public:
	int speed = {}, maxSpeed = {};
	std::string type = {};
	void init(int t);
private:
};

void Airplane::init(int t) {
	if (t == 1) this->maxSpeed = 800, this->type = "Jet";
	if (t == 2) this->maxSpeed = 350, this->type = "Single-engine";
	if (t == 3) this->maxSpeed = 180, this->type = "Glider";
};

int main() {

	Airplane* airplane1 = new Airplane();
	airplane1->init(1);
	std::cout << airplane1->maxSpeed;

	return 0;
};