#define _CRT_SECURE_NO_WARNINGS
#include"sort.h"
void swap(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
void createheap(int* a, int sz)
{
	for (int i = (sz - 2) / 2; i >= 0; i--)
	{
		int father = i;
		int child = father * 2 + 1;
		while (child < sz)
		{
			if (child + 1 < sz && a[child] < a[child + 1])//注意左边条件
			{
				child++;
			}
			if (a[father] < a[child])
			{
				swap(&a[father], &a[child]);
				father = child;
				child = 2 * child + 1;
			}
			else
				break;
		}
	}
}
void AdjustDown(int* a, int n, int parent)
{
	int child = parent * 2 + 1;

	while (child < n)
	{
		if (child + 1 < n && a[child] < a[child + 1])
		{
			child = child + 1;
		}
		if (a[child] > a[parent])
		{
			int tmp = a[child];
			a[child] = a[parent];
			a[parent] = tmp;
			parent = child;
			child = child * 2 + 1;
		}
		else
			break;

	}
}
//void sort(int* a, int sz)
//{
//	int end = sz-1;
//	
//	while (end > 0)
//	{
//		swap(&a[end], &a[0]);
//		AdjustDown(a, end, 0);
//		end--;
//	}
//
//}
void sort(int* a, int sz)
{
	int all = sz;
	for (int i = 0; i < sz; i++)
	{
		swap(&a[all - 1], &a[0]);
		all--;//立马减去
		int father = 0;
		int child = father * 2 + 1;
		while (child < all)
		{
			if (child + 1 < all&&a[child] < a[child + 1])
			{
				child++;
			}
			if (a[father] < a[child])
			{
				swap(&a[father], &a[child]);
				father = child;
				child = 2 * child + 1;

			}
			else
				break;

		}
		
	}
}
void heapsort(int* a, int sz)
{
	createheap(a, sz);
	sort(a, sz);
}

