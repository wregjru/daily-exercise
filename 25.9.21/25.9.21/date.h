#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<assert.h>
using namespace std;
class date
{
	friend istream& operator>>(istream& in, date& d);
	friend ostream& operator<<(ostream& out, date& d);
public:
	date(int year = 2000, int month = 1, int day = 1);
	void print();
	int getmonthday(int year, int month);
	/*date operator+(int day);*/
	date& operator+=(int day);
	date operator+(int day);
	int operator-(date& d);
	bool operator==(const date& d) const;
	bool operator!=(const date& d) const;
private:
	int _year;
	int _month;
	int _day;

};
istream& operator>>(istream& in, date& d);
ostream& operator<<(ostream& out, date& d);