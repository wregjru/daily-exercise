#define _CRT_SECURE_NO_WARNINGS     
#include<iostream>
using namespace std;
class date
{
public:
	date(int year = 2020, int month = 1, int day = 1);
	int getmonthday(int year, int month);
	void print();
	date& operator+=(int day);
private:
	int _year;
	int _month;
	int _day;
};