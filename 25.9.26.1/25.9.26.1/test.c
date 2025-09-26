#define _CRT_SECURE_NO_WARNINGS
#include"sort.h"
int main()
{
	int arr[6] = { 3,2,5,7,1,8 };
	int sz = sizeof(arr) / sizeof(int);
	heapsort(arr, sz);
	return 0;
}