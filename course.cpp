#include "course.h"
#include <sstream>
#include <iostream>
#include "user.h"
#include "student.h"
#include "teacher.h"

using namespace std;

extern vector<user*> AllUsers;
extern vector<course*> AllCourses;

int course::CNum=0;

course::course(std::string name, teacher* tea)
:DominTeacher(tea),CourseName(name),mytime()
{
	CNum++;
	CourseNum = CNum;
	AllCourses.push_back(this);
}

int course::addStudent(student * stu)
{
	stu->addCourse(this);
	AttenStudent.push_back(stu);
	marks.push_back(-1);
	return 0;
}

int course::addStudent(student* stu,int score)
{
	stu->addCourse(this);
	AttenStudent.push_back(stu);
	marks.push_back(score);
	return 0;
}

int course::score(student* stu, int score)
{
	for (int i=0;i<AttenStudent.size();i++)
	{
		if (*(AttenStudent.begin()+i) == stu)
		{
			*(marks.begin()+i) = score;
			return 1;
		}
	}

	return 0;
}

int course::score(int stuNum, int score)
{
	for (int i=0;i<AttenStudent.size();i++)
	{
		if ((*(AttenStudent.begin()+i))->getNum() == stuNum )
		{
			*(marks.begin()+i) = score;
			return 1;
		}
	}

	return 0;
}

int course::score(string name, int score)
{
	for (int i=0;i<AttenStudent.size();i++)
	{
		if ((*(AttenStudent.begin()+i))->getName() == name )
		{
			*(marks.begin()+i) = score;
			return 1;
		}
	}

	return 0;
}

void course::sort(int a)
{
	int sum = AttenStudent.size();

	int tmp1;
	student* tmp2;

	for (int i=0;i<sum;i++)
		for (int j=i;j<sum;j++)
		{
			int s1= *(marks.begin()+i),s2=*(marks.begin()+j);
			if (((s1-s2)*a)<0)
			{
				tmp1 = *(marks.begin()+i);
				*(marks.begin()+i) = *(marks.begin()+j);
				*(marks.begin()+j) = tmp1;

				tmp2 = *(AttenStudent.begin()+i);
				*(AttenStudent.begin()+i) = *(AttenStudent.begin()+j);
				*(AttenStudent.begin()+j) = tmp2;
			}
		}
}

int course::ask(int stuNum, string& score, int& rank)
{
	sort(1);

	for (int i=0;i<AttenStudent.size();i++)
	{
		if ((*(AttenStudent.begin()+i))->getNum() == stuNum )
		{
			//score.(*(marks.begin()+i));
			stringstream tmp;
			tmp<< (*(marks.begin()+i));
			tmp>> score;
			rank = i+1;
			return 1;
		}
	}

	return 0;

}

void course::display()
{
	cout << "TsetForClass" << endl;
}

string course::getName()
{
	return CourseName;
}

int course::getNum()
{
	return CourseNum;
}