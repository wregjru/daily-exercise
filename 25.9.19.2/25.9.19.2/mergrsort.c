#define _CRT_SECURE_NO_WARNINGS
#include"sort.h"
void _mergesort(int* tmp, int* a, int left, int right)
{
	if (left >= right)
	{
		return;
	}
	int mid = (left + right) / 2;
	_mergesort(tmp, a, left, mid);
	_mergesort(tmp, a, mid+1, right);
	int gap = 1;
	int start1 = left;
	int end1 = mid;
	int start2 = mid+1;
	int end2 = right;
	int t = left;
	while (start1 <= end1 && start2 <= end2)
	{
		if (a[start1] < a[start2])
		{
			tmp[t++] = a[start1++];
		}
		else
		{
			tmp[t++] = a[start2++];
		}
		
	}
	while (start1 <= end1)
	{
		tmp[t++] = a[start1++];
	}
	while (start2 <= end2)
	{
		tmp[t++] = a[start2++];
	}
	for (int j = left; j <= right; j++)
	{
		a[j] = tmp[j];
	}
}
void mergesort(int* a, int sz)
{
	int* tmp = (int*)malloc(sizeof(int) * sz);
	_mergesort(tmp, a, 0, sz - 1);
}