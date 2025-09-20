#include<iostream>
 //#include<stdio.h>
using namespace std;
class A
{
public:
	//A()//无参构造函数
	//{
	//	_year = 1;
	//	_month = 1;
	//	_day = 1;

	//}
	//A(int year,int month,int day)//有参构造函数
	//{
	//	_year = year;
	//	_month = month;
	//	_day = day;

	//}
	A operator=(A& d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
		return *this;
	}
	A(int year = 2025, int month = 1, int day = 1)//全缺省构造函数
	{
		_year = year;
		_month = month;
		_day = day;
	}
	A(A& d)//拷贝构造函数
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}
	void Init(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	void print()
	{
		cout << _year << "/" << _month << "/" << _day << endl;
	}
	/*A& operator=(const A& d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;

		return *this;
	}*/
private:
	int _year;
	int _month;
	int _day;
};
int main()
{
	A a;
	A a4;
	A a2(2025, 9, 20);
	A a3(a2);
	//a.Init(2025, 1, 1);
	a3.print();
	a4 = a2;
	return 0;
}
