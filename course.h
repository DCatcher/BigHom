#ifndef	COURSE_H
#define COURSE_H

#include "mytime.h"
#include <vector>

class student;
class admin;
class teacher;


class course:public mytime
{
public:
	course(std::string name,teacher*);
	~course();
	int addStudent(student*);
	int addStudent(student*,int);
	//int addStudent(int);
	//int addStudent(int,int);
	virtual int score(student*,int);
	virtual int score(int,int);
	virtual int score(std::string,int);
	friend class admin;
	friend class teacher;
	virtual void display();
	virtual int ask(int,std::string&,int&);
	void sort(int);
	std::string getName();
	int getNum();

private:
	int CourseNum;
	static int CNum;
	teacher* DominTeacher;
	std::vector<student*> AttenStudent;
	std::vector<int> marks;
	std::string CourseName;
};

class courseWisOut:public course
{
public:
	void display();
	int ask(int,std::string&,int&);
};

class courseWis:public course
{
public:
	void display();
	//void ask(int,string&,int&);
};


#endif 