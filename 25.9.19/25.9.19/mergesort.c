#define _CRT_SECURE_NO_WARNINGS
#include"sort.h"
void swap(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
_mergesort(int* a, int* tmp, int left, int right)
{
	if (left >= right)
		return;
	int mid = (left + right) / 2;
	_mergesort(a, tmp, left, mid);
	_mergesort(a, tmp, mid + 1, right);
	int begin1 = left;
	int end1 = mid;
	int begin2 = mid + 1;
	int end2 = right;
	int i = left;
	while (begin1 <= end1 && begin2 <= end2)
	{
		if (a[begin1] <= a[begin2])
		{
			tmp[i++] = a[begin1++]; 
		}
		else
		{
			tmp[i++] = a[begin2++]; 
		}
	}
	while (begin1 <= end1)
	{
		tmp[i++] = a[begin1++];
	}
	while (begin2 <= end2)
	{
		tmp[i++] = a[begin2++];
	}
	for (int j = left; j <= right; j++)//小数组排完后立马复制
	{
		a[j] = tmp[j];
	}

}
void mergesort(int* a, int sz)
{
	int* tmp = (int*)malloc(sizeof(int) * sz);
	_mergesort(a, tmp, 0, sz - 1);
	
}