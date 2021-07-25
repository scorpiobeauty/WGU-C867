#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include "degree.h"
using std::string;
using std::cout;
//using std::endl;

class Student {

public:
	const static int daysInClassArray = 3;

private:
	string studentID;
	string firstName;
	string lastName;
	string emailAddress;
	int age;
	int daysInCourse[daysInClassArray];
	DegreeProgram degreeProgram;

public:
	Student();/*student constructor*/
	Student(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse[], DegreeProgram degreeProgram);/*full constructor*/
	~Student();/*destructor*/

	/*accessors*/
	string getStudentID();
	string getFirstName();
	string getLastName();
	string getEmailAddress();
	int getAge();
	int* getDaysInCourse();
	DegreeProgram getDegreeProgram();

	/*mutators*/
	void setStudentID(string studentID);
	void setFirstName(string firstName);
	void setLastName(string lastName);
	void setEmailAddress(string emailAddress);
	void setAge(int age);
	void setDaysInCourse(int daysInCourse[]);
	void setDegreeProgram(DegreeProgram degreeProgram);
	
	
	static void printHeader();

	void print();
};