#include "user.h"
#include <iostream>

using namespace std;

user::user(std::string name,int num):
			sUserName(name),iUserNum(num),paswd(num)
{
	++iNum;
}


user::user(string name,string pasword):paswd(pasword)
{
	++iNum;
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
