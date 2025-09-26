#define _CRT_SECURE_NO_WARNINGS
#include"sort.h"
void shellsort(int* arr, int sz)
{
	int gap = sz;
	while (gap > 1)
	{
		gap = gap / 3 + 1;
		for (int i = 0; i < sz - gap; i++)
		{
			int end = i;
			while (end >= 0)
			{
				if (arr[i + gap] < arr[i])//ÖØÒª
				{
					int tmp = arr[i + gap];
					arr[i + gap] = arr[i];
					arr[i] = tmp;
				}
				end -= gap;
			}
		}
		
	}
}