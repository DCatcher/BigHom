#ifndef MYTIME_H
#define MYTIME_H

#include <ctime>

class mytime
{
public:
	mytime();
	mytime(time_t);
	int showYear();
	int showMonth();
	int showDay();
	int showAll();
	int showWeek();

private:
	time_t timeNow;
};

#endif