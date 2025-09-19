#define _CRT_SECURE_NO_WARNINGS
#include"sort.h"
#include"stack.h"
int _quicksort(int* a, int left, int right);
void __quicksort(int* a, int left, int right)
{
	ST st;
	STInit(&st);
	STPush(&st, right);
	STPush(&st, left);
	while (!STEmpty(&st))
	{
		int begin = STTop(&st);
		STPop(&st);
		int end = STTop(&st);
		STPop(&st);
		int keyi = _quicksort(a, begin, end);
		if (keyi + 1 < end)
		{
			STPush(&st, end);
			STPush(&st, keyi + 1);
		}
		if (keyi - 1 > begin)
		{
			STPush(&st, keyi - 1);
			STPush(&st, begin);
		}

	}
}
int _quicksort(int* a, int left, int right)
{

	
	int val = left;
	int start = left;
	int end = right;
	while (start < end)
	{
		while (a[end] > a[val])
		{
			end--;
		}
		while (a[start] < a[val])
		{
			start++;
		}
		swap(&a[start], &a[end]);
	}
	swap(&a[val], &a[start]);
	return start;


}
void quicksort(int* a, int sz)
{
	
	__quicksort(a, 0, sz - 1);
}