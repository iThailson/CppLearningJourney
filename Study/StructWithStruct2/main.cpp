#include <iostream>
#include <string>
#include <new>

typedef struct date {
	int day{}, month{}, year{};
}date;

struct student {
	std::string name{};
	std::string college{};
	int enrollment{};
	date birth{};
};

int main() {
	student* fistStudent = new student;
	fistStudent->name = "Thailson Julio de Lima Bispo";
	fistStudent->college = "Uninassau";
	fistStudent->enrollment = 153488;
	fistStudent->birth.day = 25;
	fistStudent->birth.month = 1;
	fistStudent->birth.year = 2002;

	std::cout
		<< "College name: " << fistStudent->college << "\n"
		<< "Registration number: " << fistStudent->enrollment << "\n"
		<< "Student name: " << fistStudent->name << "\n"
		<< "Date of birth: " << fistStudent->birth.day << "/" << fistStudent->birth.month << "/" << fistStudent->birth.year << "\n";

};