#define _CRT_SECURE_NO_WARNINGS
#include"heap.h"
int main()
{
	int t[] = { 3,2,1,6,4,34,22,678,234 };
	int sz = sizeof(t) / sizeof(int);


	HeapSort(t, sz);
	int b = 0;
	return 0;
}