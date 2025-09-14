#define _CRT_SECURE_NO_WARNINGS
#include"heap.h"
int main()
{
	int t[] = { 3,2,1,6,7,34,22,35,40 };
	int sz = sizeof(t) / sizeof(int);
	HeapSort(t, sz);
	int b = 0;
	return 0;
}