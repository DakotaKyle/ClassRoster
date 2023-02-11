#include <iostream>
#include <sstream>
#include <string>
#include "Roster.h"
#include "Degree.h"
#include "Student.h"

using namespace std;

DegreeProgram degree;
Student studentDegree;

Roster::Roster() {}

Roster::~Roster() {

	delete addStudent;
}
void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram) {
	
		Student *addStudent = new Student(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, degreeProgram);

		 classRosterArray[i] = addStudent;
	
		return;
}

const string studentData[] =
{ "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
  "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
  "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
  "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
  "A5,Dakota,Kyle,dkyle45@comcast.net,25,30,40,50,SOFTWARE"
};

void Roster::printAll() {

	cout << "Displaying all Students: \n" << endl;

	for (int j = 0; j < 5; j++) {
	
		if (classRosterArray[j] != NULL) {
		
			classRosterArray[j]->print();

			if (classRosterArray[j]->getDegree() == DP_SECURITY) {

				studentDegree.print("Security");
			}
			else if (classRosterArray[j]->getDegree() == DP_SOFTWARE) {

				studentDegree.print("Software");
			}
			else if (classRosterArray[j]->getDegree() == DP_NETWORK) {

				studentDegree.print("Network");
			}
		}
	}
}

void Roster::printInvalidEmails() {

	string eMail;

	cout << "Displaying invaid Emails: \n" << endl;

	for (int j = 0; j < 5; j++) {
	
		eMail = (classRosterArray[j])->getEmail();

		size_t at = eMail.find('@');

			if (at == string::npos) {

				cout << eMail << " - missing an @ symbol.\n" << endl;
			}
		
		size_t period = eMail.find('.');
		
			if (period == string::npos) {

				cout << eMail << " - missing a period." << endl;
			} 
		
		size_t space = eMail.find(' ');
		
			if (space != string::npos) {

				cout << eMail << " - no spaces allowed." << endl;
			}
	} 
}

void Roster::printAverageDaysInCourse(std::string studentID) {
	
	int avg = 0;

	for (int j = 0; j < 5; j++) {
	
		if (studentID == classRosterArray[j]->getStudentID()) {
		
			avg = classRosterArray[j]->getAvgDays();
		}
	}
	cout << "student ID: " << studentID << "," << " averages " << avg  << " days in a course."<< endl;
}

void Roster::printByDegreeProgram(DegreeProgram degreeProgram) {

	cout << "Displaying student's in degree program: SOFTWARE\n" << endl;

	for (int j = 0; j < 5; j++) {
	
		if (degreeProgram == classRosterArray[j]->getDegree()) {

			classRosterArray[j]->print();
			classRosterArray[j]->print("SOFTWARE");
		}
	}
}

void Roster::remove(string studentID) {
	
	for (int j = 0; j < 5; j++) {

		if (classRosterArray[j] != NULL) {
		
			if (studentID == classRosterArray[j]->getStudentID()) {

				classRosterArray[j] = deleteStudent;
				break;
			}
		}
		else {
		
			cout << "Student ID was not found." << endl;
		}
	}
}

void Roster::printMyInfo() {

	cout << "Scripting and Programming - Applications - C867" << endl;
	cout << "Language c++" << endl;
	cout << "Student ID: 001333095" << endl;
	cout << "Dakota Kyle" << "\n" << endl;

	return;
}

void Roster::add() {

	for (i; i < 5; i++) {

		istringstream inSS(studentData[i]);
		string tempIndex;

		for (int j = 0; j < 9; j++) {

			getline(inSS, tempIndex, ',');

			index[j] = (tempIndex);
		}
		
		if (index[8] == "SECURITY") {
		
			degree = DegreeProgram::DP_SECURITY;
		}
		else if (index[8] == "NETWORK") {
		
			degree = DegreeProgram::DP_NETWORK;
		}
		else if (index[8] == "SOFTWARE") {
		
			degree = DegreeProgram::DP_SOFTWARE;
		}

		add(index[0], index[1], index[2], index[3], stoi(index[4]), stoi(index[5]), stoi(index[6]), stoi(index[7]), degree);

		inSS.clear();
	}
}