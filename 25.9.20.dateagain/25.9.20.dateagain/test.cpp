#define _CRT_SECURE_NO_WARNINGS
#include"date.h"
int main()
{
	date d1(2025,1,1);
	date d2 = d1 += 100;
	d2.print();
	return 0;
}