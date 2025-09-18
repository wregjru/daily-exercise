#define _CRT_SECURE_NO_WARNINGS
#include"sort.h"
int main()
{
	int a[6] = { 2,1,4,7,3,5 };
	int sz = sizeof(a) / sizeof(int);
	heapsort(a, sz);
	return 0;
}