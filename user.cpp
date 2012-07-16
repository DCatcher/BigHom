#include "user.h"
#include <iostream>

using namespace std;

user::user(std::string name,int num,time_t t):
			sUserName(name),iUserNum(num),paswd(num),mytime(t)
{
	++iNum;
}


user::user(string name):mytime(),paswd(++iNum)
{
	iUserNum = iNum;
	sUserName = name;
}

int user::display()
{
	cout << "用户名为：" << sUserName << endl;
	return 0;
}

int user::getGrade()
{
	return 0;
}
