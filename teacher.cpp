#include "teacher.h"
#include "course.h"
#include <iostream>

using namespace std;

int teacher::getGrade()
{
	return 2;
}

teacher::teacher(string userName, int userNum, int tNum, string name)
:user(userName,userNum),teaNum(tNum),teaName(name)
{}

teacher::teacher(string userName, string pawd, int tNum, string name)
:user(userName,pawd),teaNum(tNum),teaName(name)
{}

int teacher::display()
{
	cout << "TestForTeacher" << endl;
	return 0;
}

void teacher::openCourse(string name)
{
	courseIdomin.push_back(new course(name,this));
}

/*course* teacher::courseFind(string name)
{
	for (int i=0;i<courseIdomin.size();i++)
	{
		if (!((*(courseIdomin.begin()+i))->getName().compare(name)))
		{
			cout <<"Find!" << endl;
			return *(courseIdomin.begin()+i);
		}
	}

	return 0;
}*/

int teacher::score(int coNum,int stuNum,int mark)
{
	for (int i=0;i<courseIdomin.size();i++)
	{
		if (!((*(courseIdomin.begin()+i))->getNum()==coNum))
		{

			return (*(courseIdomin.begin()+i))->score(stuNum,mark);
		}
	}

	return -1;

}

int teacher::getNum()
{
	return teaNum;
}

string teacher::getName()
{
	return teaName;
}

