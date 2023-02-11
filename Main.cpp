#include <iostream>
#include <string>
#include "degree.h"
#include "Roster.h"

using namespace std;

Roster classRoster;
Student student;

int main() {

	classRoster.printMyInfo();
	classRoster.add();
	classRoster.printAll();
	classRoster.printInvalidEmails();

	string studentID;

	cout << "Displaying student's average days in course: \n" << endl;

	for (int i = 0; i < 5; i++) {
	
		studentID = classRoster.classRosterArray[i]->getStudentID();
		
		classRoster.printAverageDaysInCourse(studentID);
	}

	cout << "\n";

	classRoster.printByDegreeProgram(DP_SOFTWARE);
	classRoster.remove("A3");
	classRoster.printAll();
	classRoster.remove("A3");

	return 0;
}