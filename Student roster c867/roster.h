#pragma once
#include "student.h"

class Roster
{
public:
	int lastIndex = -1;
	const static int numStudents = 5;
	Student* classRosterArray[numStudents];

public:
	void parse(string row);
	void add(string sID,
		string sfirstName,
		string sLastName,
		string sEmailAddress,
		int sAge,
		int sdaysInCourse1,
		int sdaysInCourse2,
		int sdaysInCourse3,
		DegreeProgram dp);
	void remove(string studentID);
	void printAll();
	void printAverageDaysInCourse(string studentID);
	void printInvalidEmails();
	void printByDegreeProgram(DegreeProgram degreeProgram);



	~Roster(); /*destructor*/
};

