#define _CRT_SECURE_NO_WARNINGS
#include"sort.h"
int main()
{
	int a[7] = { 2,5,4,1,3,8,6 };
	int sz = sizeof(a) / sizeof(int);
	quicksort(a, sz);
	return 0;
}