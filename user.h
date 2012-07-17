#ifndef USER_H
#define USER_H

#pragma once

#include <string>
#include "code.h"
#include <vector>

class user:public paswd
{
public:
	user(std::string,std::string);
	user(std::string,int);
	virtual int display()=0;
	virtual int getGrade()=0;
	virtual int getNum()=0;
	virtual std::string getName()=0;
private:
	std::string sUserName;
	int iUserNum;
	static int iNum;
};


#endif