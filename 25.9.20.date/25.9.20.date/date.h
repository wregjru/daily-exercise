#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<assert.h>
using namespace std;
class date
{
public:
	date(int year = 2000, int month = 1, int day = 1);
	void print();
	int getmonthday(int year, int month);
	/*date operator+(int day);*/
	date operator+=(int day);
private:
	int _year;
	int _month;
	int _day;

};
