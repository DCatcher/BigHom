#include <ctime>
#include <iostream>
#include "mytime.h"

using namespace std;

mytime::mytime()
{
	timeNow = time(0);
}

mytime::mytime(time_t tmp)
{
	timeNow = tmp;
}


int mytime::showYear()
{
	return localtime(&timeNow)->tm_year;
}

int mytime::showMonth()
{
	return localtime(&timeNow)->tm_mon;
}

int mytime::showDay()
{
	return localtime(&timeNow)->tm_mday;
}

int mytime::showWeek()
{
	return localtime(&timeNow)->tm_wday;
}

int mytime::showAll()
{
	char tmp[64]; 
    strftime( tmp, sizeof(tmp), "%Y/%m/%d %X %A 本年第%j天 %z",localtime(&timeNow) ); 
    puts( tmp ); 

	return 0;
}