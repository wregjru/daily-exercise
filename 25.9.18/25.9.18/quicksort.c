#define _CRT_SECURE_NO_WARNINGS
#include"sort.h"
void _swap(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
int choosemid(int* a, int left, int right)
{
	int mid = (left + right) / 2;
	if (a[left] < a[mid])
	{
		if (a[right] < a[left])
		{
			return left;
		}
		else if(a[right] < a[mid])
		{
			return right;
		}
		else
		{
			return mid;
		}
	}
	else
	{
		if (a[right] < a[mid])
		{
			return mid;
		}
		else if (a[right] < a[left])
		{
			return right;
		}
		else
		{
			return left;
		}

	}
}
void _quicksort(int* a, int left,int right)
{
	if (left > right)
	{
		return;
	}
	if ((right - left) < 5)
	{
		shellsort(a+left, right - left + 1);
	}
	else 
	{
		int key = choosemid(a, left, right);
		_swap(&a[left], &a[key]);
		int begin = left;
		int end = right;
		
		while (begin < end)
		{
			while (begin < end && a[end] >= a[left])//不是a[end] >= a[key]，因为已经被交换
			{
				end--;
			}
			while (begin < end && a[begin] <= a[left])
			{
				begin++;
			}
			_swap(&a[begin], &a[end]);
		}
		_swap(&a[left], &a[begin]);
		_quicksort(a, left, begin - 1);
		_quicksort(a, begin + 1, right);
	}
	




}
void quicksort(int* a, int sz)
{
	_quicksort(a, 0, sz-1);
}