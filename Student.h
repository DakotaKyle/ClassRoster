#pragma once

#include <string>
#include "degree.h"

class Student {
public:

	Student();
	Student(std::string conSID, std::string conFirstName, std::string conLastName, std::string conEMail, int conAge, int day1, int day2, int day3, DegreeProgram conDegree);
	
	void print() const;
	void print(const char* degree);
	void setStudentID(std::string studentID);
	void setFirstName(std::string firstName);
	void setLastName(std::string lastName);
	void setEmail(std::string StudentEMail);
	void setAge(int studentAge);
	void setDegree(DegreeProgram studentDegree);
	void setAvgDays(int dayOne, int dayTwo, int dayThree);

	std::string getStudentID() const;
	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getEmail() const;
	int getAge() const;
	int getAvgDays() const;
	DegreeProgram getDegree() const;
	
private:
	
	std::string sID = "none";
	std::string fName = "none";
	std::string lName = "none";
	std::string eMail = "none";
	int age = 0;
	int daysInCourse[3] = {0, 0, 0};
	DegreeProgram degree = DP_SOFTWARE;
};