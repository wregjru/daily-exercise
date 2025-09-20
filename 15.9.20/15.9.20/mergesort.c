#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void _mergesort(int*tmp,int*a,int left,int right)
{
	int mid = (left + right) / 2;
	if (left >= right)
	{
		return;
	}
	_mergesort(tmp, a, mid + 1, right);
	_mergesort(tmp, a, left, mid);
	int start1 = left;
	int end1 = mid;
	int start2 = mid + 1;
	int end2 = right;
	int j = left;//注意，要将开始元素初始化
	while (start1 <= end1 && start2 <= end2)
	{
		if (a[start1] < a[start2])
		{
			tmp[j] = a[start1];//注意，是1不是2
			j++;
			start1++;
		}
		else
		{
			tmp[j] = a[start2];
			j++;
			start2++;
		}
	}
	while (start1 <= end1)
	{
		tmp[j++] = a[start1++];
	}
	while (start2 <= end2)
	{
		tmp[j++] = a[start2++];
	}
	for (int k = left; k <= right; k++)
	{
		a[k] = tmp[k];
	}

}
void mergesort(int* a, int sz)
{
	int* tmp = (int*)malloc(sizeof(int) * sz);
	_mergesort(tmp, a, 0, sz - 1);
}
int main()
{
	int a[7] = { 4,2,1,6,8,10,9 };
	int sz = sizeof(a) / sizeof(int);
	mergesort(a, sz);
	return 0;
}