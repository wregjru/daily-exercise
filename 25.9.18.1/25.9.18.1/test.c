#define _CRT_SECURE_NO_WARNINGS
#include"sort.h"
int main()
{
	int a[6] = { 4,2,5,1,7,8 };
	int sz = sizeof(a) / sizeof(int);
	shellsort(a, sz);
	return 0;
}