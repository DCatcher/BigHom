#ifndef ADMIN_H
#define ADMIN_H

#include "user.h"

class admin:public user
{
public:
	admin(std::string,std::string,int admFaNum);
	admin(std::string,int userNum,int admNum,int admFaNum);
	void display();
	int getGrade();

private:
	int admNum,admFaNum;

};

#endif 