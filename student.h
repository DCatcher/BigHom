#ifndef STUDENT_H
#define STUDENT_H

#include "user.h"
#include "admin.h"

class course;

class student:public user
{
public:
	friend class admin;
	student(std::string,std::string,int);
	student(std::string,int userNum,int stuNum);
	void display();
	void displayMarks();
	int getGrade();

private:
	int stuNum;
	vector<course*> courseIhave;
};


#endif 