#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;



int main()
{
	double a = 3.14;
	const int& ra = a;
	const double& rra = ra;//double& rra = ra;ÊÇ´íµÄ
	return 0;
}