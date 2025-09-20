#define _CRT_SECURE_NO_WARNINGS
#include"date.h"
date::date(int year, int month, int day)
{
	_year = year;
	_month = month;
	_day = day;
}
void date::print()
{
	cout << _year << "-" << _month << "-" << _day << endl;
}
int date::getmonthday(int year, int month)
{
	static int monthDayArray[13] = { -1, 31, 28, 31, 30, 31, 30,31, 31, 30, 31, 30, 31 };
	if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)))
	{
		return 29;
	}
	return monthDayArray[month];
	
}
//date date::operator+(int day)
//{
//	date tmp = *this;
//
//	tmp += day;
//	return tmp;
//}
date& date::operator+=(int day)
{
	_day += day;
	while (_day > getmonthday(_year, _month))
	{
		_day -= getmonthday(_year, _month);

		_month++;
		if (_month > 12)
		{
			_month = 1;
			_year++;
		}
	}
	return *this;
}