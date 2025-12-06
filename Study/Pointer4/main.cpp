#include <iostream>
static void sum(float* Add, float added) {
	*Add += added;
};
static void iniVector(float* pV) {
	pV[0] = 10;
	pV[1] = 20;
	pV[2] = 30;
	pV[3] = 40;
	pV[4] = 50;
}
int main() {
	float num = {};
	float v[5]{};

	sum(&num, 15);
	iniVector(v);

	std::cout << num << "\n\n";

	for (int i = 0; i < 5; ++i) {
		std::cout << v[i] << "\n";
	}

	return 0;
}