#ifndef TEACHER_H
#define TEACHER_H

#include "user.h"
#include "admin.h"

class course;

class teacher:public user
{
public:
	friend class admin;
	teacher(std::string,std::string,int);
	teacher(std::string,int userNum,int teaNum);
	void display();
	int getGrade();

private:
	int teaNum;
	vector<course*> courseIdomin;

};

#endif 