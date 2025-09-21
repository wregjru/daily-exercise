#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class date
{
public:
	date(int year,int month,int day)
		:_year(year)
		,_month(month)
		,_day(day)
	{ }
	date()
	{
		_year = 2025;
		_month = 3;
		_day = 3;
	}
	void print()
	{
		cout << _year << "/" << _month << "/" << _day << endl;
	}

private:
	int _year=2000;
	int _month=1;
	int _day=1;
};
 
int main()
{
	void(date:: * PF)();
	PF = &date::print;
	
	date d1(2020, 2, 2);
	d1.print();
	(d1.*PF)();
	date d2;
	d2.print();
	return 0;
}