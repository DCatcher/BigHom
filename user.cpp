#include "user.h"
#include <iostream>

using namespace std;

class course;

extern vector<user*> AllUsers;
extern vector<course*> AllCourses;

user::user(std::string name,int num)
:sUserName(name),iUserNum(num),paswd(num)
{
	++iNum;
	AllUsers.push_back(this);
}


user::user(string name,string pasword):paswd(pasword)
{
	
	iUserNum = ++iNum;
	sUserName = name;
	AllUsers.push_back(this);
}
