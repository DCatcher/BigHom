#ifndef USER_H
#define USER_H

#pragma once

#include <string>
#include "mytime.h"
#include "code.h"

class user:public paswd
{
public:
	user(std::string,std::string);
	user(std::string,int);
	virtual int display();
	virtual int getGrade();
private:
	std::string sUserName;
	int iUserNum;
	static int iNum;
};

#endif