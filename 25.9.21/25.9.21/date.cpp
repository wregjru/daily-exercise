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
date date::operator+(int day)
{
	date tmp = *this;

	tmp += day;
	return tmp;
}
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
bool date::operator==(const date& d) const
{
	return _year == d._year
		&& _month == d._month
		&& _day == d._day;
}
bool date::operator!=(const date& d) const
{
	return !(*this == d);
}
int date::operator-(date& d)
{
	date min = d;
	date max = *this;
	int flag = -1;
	if (d._year > _year)
	{
		max = *this;
		min = d;
		flag = 1;
	}
	else if (d._month == _month)
	{
		if (d._month > _month)
		{
			max = *this;
			min = d;
			flag = 1;
		}
		else if (d._month == _month)
		{
			if (d._day > _day)
			{
				max = *this;
				min = d;
				flag = 1;
			}
		}
	}
	int s = 0;
	while (min != max)
	{
		min=min+(0,0,1);
		s++;
	}
	return s * flag;

}
istream& operator>>(istream& in, date& d)
{
	in >> d._year >> d._month >> d._day;
	return in;
}
ostream& operator<<(ostream& out, date& d)
{
	out << d._year <<"s"<< d._month <<"s"<< d._day << endl;
	return out;
}