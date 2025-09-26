#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1("hello");
	auto i = s1.begin();
	while (i < s1.end())
	{
		cout << *i << " ";
		i++;
	}
	for (auto t : s1)
	{
		cout << t << " ";
	}
	cout << endl;
	s1[0] = 'H';
	cout << s1 << endl;
	auto d = s1.rbegin();
	while (d < s1.rend())
	{
		cout << *d << " ";
		d++;
	}
	int arr[4] = { 3,2,5,4 };
	for (auto &k : arr)//相当于指针，需要引用
	{
		k *= 2;
	}
	for (auto q : arr)
	{
		cout << q << " ";
	}
	cout << arr << endl;
	return 0;
}