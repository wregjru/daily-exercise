#define _CRT_SECURE_NO_WARNINGS
#include"heap.h"
int main()
{
	int t[] = { 3,2,1,6,4,34,22,678,234 };
	HP hp;
	HPInit(&hp);
	int sz = sizeof(t) / sizeof(int);
	for(int i=0;i<sz;i++)
	HPPush(&hp,t[i]);
	HPPop(&hp);
	HPPop(&hp);
	HeapSort(t, sz);
	int b = 0;
	return 0;
}