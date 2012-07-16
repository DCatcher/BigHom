#ifndef	COURSE_H
#define COURSE_H

#include "admin.h"
#include "student.h"
#include "teacher.h"
#include "mytime.h"


class course:public mytime
{
public:
	course(std::string name,teacher*);
	~course();
	int addStudent(student*);
	friend class admin;
	friend class teacher;
	virtual void display();
	virtual void ask();
	void sort();

private:
	int CourseNum;
	static int CNum;
	teacher* DominTeacher;
	vector<student*> AttenStudent;
	vector<int> marks;
	std::string CourseName;

};

class courseWisOut:public course
{
public:
	void display();
	void ask();
};

class courseWis:public course
{
public:
	void display();
	void ask();
};

#endif 