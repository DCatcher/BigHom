#ifndef TEACHER_H
#define TEACHER_H

#include "user.h"
#include <vector>

class course;
class admin;

class teacher:public user
{
public:
	teacher(std::string,std::string,int,std::string);
	teacher(std::string,int userNum,int teaNum,std::string);

	int display();
	int getGrade();
	int getNum();
	std::string getName();

	void openCourse(std::string);
	int score(int ,int,int);
	//course* courseFind(std::string);

private:
	int teaNum;
	std::string teaName;
	std::vector<course*> courseIdomin;

};

#endif 