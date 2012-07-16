#ifndef MYTIME_H
#define MYTIME_H

class mytime
{
public:

	int showYear();
	int showMonth();
	int showDay();
	int showAll();
	int showWeek();
	mytime();
	mytime(time_t);

private:
	time_t timeNow;
};

#endif