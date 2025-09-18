#define _CRT_SECURE_NO_WARNINGS
#include"sort.h"
void swap(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;

}
void down(int* a, int sz, int parent)
{
	int child = parent * 2 + 1;

	while (child < sz)
	{
		if (child < sz - 1 && a[child] < a[child + 1])
		{
			child++;
		}
		if (a[parent] < a[child])
		{
			swap(&a[parent], &a[child]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
			break;

	}
}
void sort(int* a, int sz)
{
	int end = sz - 1;
	while (end > 0)
	{
		swap(&a[0], &a[end]);
		down(a, end, 0);
		end--;
	}
}
void createsort(int* a, int sz)
{
	for (int i = (sz - 2) / 2; i >= 0; i--)
	{
		down(a, sz, i);
	}
}
void heapsort(int* a, int sz)
{
	createsort(a, sz);
	sort(a, sz);
}