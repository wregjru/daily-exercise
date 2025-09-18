#define _CRT_SECURE_NO_WARNINGS
#include"sort.h"
void shellsort(int* a, int sz)
{
	int gap = sz;
	while (gap>1)
	{
		gap = gap / 3 + 1;
		for (int i = 0; i < sz - gap; i++)
		{
			int end = i;
			while (end>=0)
			{
				if (a[end + gap] < a[end])
				{
					swap(&a[end + gap], &a[end]);
				}
				end = end - gap;
			}
		}
	}
}
//void shellsort(int* a, int sz)
//{
//	int gap = sz;
//	while (gap > 1)
//	{
//		gap = gap / 3 + 1;
//		for (int i = 0; i < sz - gap; i++)
//		{
//			int end = i;
//			while (end >= 0)
//			{
//				if (a[end + gap] < a[end])
//				{
//					swap(&a[end + gap], &a[end]);
//				}
//				end = end - gap;
//			}
//
//		}
//	}
//
//}