#include <iostream>
#include "user.h"
#include "course.h"
#include "admin.h"
#include <cstdlib>
#include <fstream>

int user::iNum = 0;


using namespace std;

vector<course*> AllCourses;
vector<user*> AllUsers;

const string userData = "�˼ҲŲ����˺���.txt",
			 codeData = "�������̹ػ���.txt";


int main()
{
	locale loc = locale::global(locale(""));
	system("cd users");

	admin* fir = new admin("zero","zero",0,"zero");

	fir->showAllUsers();

	fir->showAllCourses();

	locale::global(loc);

	return 0;
}