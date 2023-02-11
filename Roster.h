#pragma once

#include <string>
#include "Student.h"

class Roster {
public:
	Roster();
	~Roster();

	void add(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);
	void remove(std::string studentID);
	void printAll();
	void printAverageDaysInCourse(std::string studentID);
	void printInvalidEmails();
	void printByDegreeProgram(DegreeProgram degreeProgram);
	void printMyInfo();
	void add();
	
	Student* classRosterArray[5]{0, 0, 0, 0, 0};

private:

	Student *addStudent = new Student();
	Student* deleteStudent = nullptr;
	std::string index[9];
	int i = 0;
};