#include "student.h"
#include <iostream>

using namespace std;

Student::Student() {}

Student::Student(string conSID, string conFirstName, string conLastName, string conEMail, int conAge, int day1, int day2, int day3, DegreeProgram conDegree){

	setStudentID(conSID);
	setFirstName(conFirstName);
	setLastName(conLastName);
	setEmail(conEMail);
	setAge(conAge);
	setAvgDays(day1, day2, day3);
	setDegree(conDegree);
}

void Student::print() const{

	cout << sID << "\t";
	cout << "First name: " << fName << "\t";
	cout << "Last name: " << lName << "\t";
	cout << "Email Address: " << eMail << "\t";
	cout << "Student age is: " << age << "\t";
	cout << "Average days in course: " << "{" << daysInCourse[0]  << ", " << daysInCourse[1] << ", " << daysInCourse[2] << "}" << ", " << "\t"; 
	return;
}

void Student::print(const char* degree) {

	cout << "Degree Program: " << degree << endl << "\n";
}

void Student::setStudentID(string studentID) {

	sID = studentID;
	return;
}

void Student::setFirstName(string firstName) {

	fName = firstName;
	return;
}

void Student::setLastName(string lastName) {

	lName = lastName;
	return;
}

void Student::setEmail(string studentEMail) {

	eMail = studentEMail;
	return;
}

void Student::setAge(int studentAge) {

	age = studentAge;
	return;
}

void Student::setAvgDays(int dayOne, int dayTwo, int dayThree) {
	daysInCourse[0] = dayOne;
	daysInCourse[1] = dayTwo;
	daysInCourse[2] = dayThree;
}

int Student::getAvgDays() const {

	int fday = daysInCourse[0];
	int sday = daysInCourse[1];
	int tday = daysInCourse[2];
	int sum = (fday + sday + tday) / 3;

	return sum;
}

void Student::setDegree(DegreeProgram studentDegree) {

	degree = studentDegree;
	return;
}

string Student::getStudentID() const {

	return sID;
}

string Student::getFirstName() const{

	return fName;
}

string Student::getLastName() const {

	return lName;
}

string Student::getEmail() const {

	return eMail;
}

int Student::getAge() const {

	return age;
}

DegreeProgram Student::getDegree() const {

	return degree;
}