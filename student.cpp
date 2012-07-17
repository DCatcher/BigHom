#include "student.h"
#include "course.h"
#include <iostream>

using namespace std;

student::student(string tmpUserName, string tmpPas, int Num,string stName)
:user(tmpUserName,tmpPas),stuNum(Num),stuName(stName)
{}

student::student(string userName, int userNum, int Num, string stName)
:user(userName,userNum),stuNum(Num),stuName(stName)
{}

int student::getGrade()
{
	return 1;
}

void student::displayMarks()
{
	int sum = courseIhave.size();

	for (int i=0;i<sum;i++)
	{
		string a;
		int b;
		(*(courseIhave.begin()+i))->ask(stuNum,a,b);

		//cout << a << " " << b << endl;
	}
}

int student::display()
{

	cout << "TestForStudents" << endl;

	return 0;
}

int student::getNum()
{
	return stuNum;
}

string student::getName()
{
	return stuName;
}

void student::addCourse(course* a)
{
	courseIhave.push_back(a);
}