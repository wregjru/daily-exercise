#define _CRT_SECURE_NO_WARNINGS
#include"sort.h"
int main()
{
	int a[8] = { 10,6,7,1,3,9,4,2 };
	int sz = sizeof(a) / sizeof(int);
	countsort(a, sz);
	return 0;
}