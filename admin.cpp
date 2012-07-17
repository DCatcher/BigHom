#include "admin.h"
#include <iostream>
#include "course.h"

using namespace std;

extern vector<user*> AllUsers;
extern vector<course*> AllCourses;


int admin::aNum=0;

admin::admin(string userName, int userNum, int FaNum,string name)
:teacher(userName,userNum,0,name),admFaNum(FaNum),admName(name)
{
	admNum = ++aNum;
}

admin::admin(string userName, string pawd, int FaNum, string name)
:teacher(userName,pawd,0,name),admFaNum(FaNum),admName(name)
{
	admNum = ++aNum;
}

int admin::getGrade()
{
	return 3;
}

string admin::getName()
{
	return admName;
}

int admin::getNum()
{
	return admNum;
}

int admin::getFaNum()
{
	return admFaNum;
}

int admin::display()
{
	cout << "TestForAdmin" << endl;
	return 0;
}

void admin::showAllUsers()
{
	int sum = AllUsers.size();

	for (int i=0;i<sum;i++)
		(*(AllUsers.begin()+i))->display();
}

void admin::showAllCourses()
{
	int sum = AllCourses.size();

	for (int i=0;i<sum;i++)
		(*(AllCourses.begin()+i))->display();
}