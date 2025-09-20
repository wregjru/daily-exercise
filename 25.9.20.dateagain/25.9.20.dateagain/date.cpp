#define _CRT_SECURE_NO_WARNINGS
#include"date.h"
date::date(int year, int month, int day)
{
	_year = year;
	_month = month;
	_day = day;
}
int date::getmonthday(int year, int month)
{
	int monthday[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	if ((month == 2) && ((year % 100 != 0) && (year % 4 == 0)) || (year % 400 == 0))
		return 29;
	return monthday[month];
}
void date::print()
{
	cout << _year << "-" << _month << "-" << _day << endl;
}
date& date::operator+=(int day)
{
	_day = day + _day;
	while (_day > getmonthday(_year, _month))
	{
		_day = _day - getmonthday(_year, _month);
		_month++;
		if (_month > 12)
		{
			_year++;
			_month -= 12;
		}
	}
	return *this;
}
date temp = date(2025, 1, 1) += 100;
