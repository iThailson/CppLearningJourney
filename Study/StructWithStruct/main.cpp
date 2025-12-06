#include <iostream>
#include <string>

typedef struct date {
	int day{}, month{}, year{};
}Date;

struct student {
	std::string College{};
	std::string name{};
	int enrollment{};
	date Birth{};
};

int main() {
	struct student fistStudent;
	fistStudent.College = "Uninassau";
	fistStudent.name = "Thailson Julio de Lima Bispo";
	fistStudent.enrollment = 1531488;
	fistStudent.Birth.day = 25;
	fistStudent.Birth.month = 01;
	fistStudent.Birth.year = 2002;

	std::cout
		<< "College name: " << fistStudent.College << "\n"
		<< "Registration number: " << fistStudent.enrollment << "\n"
		<< "Student name: " << fistStudent.name << "\n"
		<< "Date of birth: " << fistStudent.Birth.day << "/" << fistStudent.Birth.month << "/" << fistStudent.Birth.year << "\n";

};