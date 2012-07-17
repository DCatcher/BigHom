#ifndef STUDENT_H
#define STUDENT_H

#include "user.h"
#include <vector>

class course;
class admin;

class student:public user
{
public:
	friend class admin;
	student(std::string,std::string,int,std::string);
	student(std::string,int userNum,int stuNum,std::string);
	void displayMarks();

	int display();
	int getGrade();
	int getNum();
	std::string getName();

	void addCourse(course*);

private:
	std::string stuName;
	int stuNum;
	std::vector<course*> courseIhave;
};


#endif 