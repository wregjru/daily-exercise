#define _CRT_SECURE_NO_WARNINGS
#include"sort.h"
void _quicksort(int*a, int left, int right)
{
	if (left >= right)
	{
		return;
	}
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
	_quicksort(a, 0, end - 1);
	_quicksort(a, end + 1, right);


}
void quicksort(int* a, int sz)
{
	_quicksort(a, 0, sz - 1);
}