#define _CRT_SECURE_NO_WARNINGS
#include"sort.h"
void countsort(int* a, int sz)
{
	int max = a[0];
	int min = a[0];
	for (int i = 0; i < sz; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
		if (a[i] < min)
		{
			min = a[i];
		}
	}
	int range = max - min + 1;
	//int* tmp = (int*)malloc(sizeof(int) * range);
	int* tmp = (int*)calloc(range, sizeof(int));
	for (int j = 0; j < sz; j++)
	{
		tmp[a[j] - min]++;
	}
	int s = 0;
	for (int k = 0; k < range; k++)
	{
		while (tmp[k]--)
		{
			a[s++] = min + k;
		}
	}

}