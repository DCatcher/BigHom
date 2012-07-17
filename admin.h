#ifndef ADMIN_H
#define ADMIN_H

#include "teacher.h"
#include <vector>
#include "course.h"

class admin:public teacher
{
public:
	admin(std::string,std::string,int admFaNum,std::string);
	admin(std::string,int userNum,int admFaNum,std::string);
	int display();
	int getFaNum();
	std::string getName();
	int getNum();
	int getGrade();
	void showAllUsers();
	void showAllCourses();

private:
	static int aNum; 
	int admNum,admFaNum;
	std::string admName;

};

#endif 