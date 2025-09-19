#define _CRT_SECURE_NO_WARNINGS
#include"sort.h"
_mergesortno(int* a, int sz)
{
	int* tmp = (int*)malloc(sizeof(int) * sz);
	int gap = 1;
	while (gap < sz)

	{
		for (int i = 0; i < sz; i += 2 * gap)
		{
			int begin1 = i;
			int end1 = gap + i - 1;
			int begin2 = gap + i;
			int end2 = i + 2 * gap - 1;
			if (begin2 >= sz)
			{
				break;
			}
			if (end2 >= sz)
			{
				end2 = sz - 1;
			}
			int j = i;
			while (begin1 <= end1 && begin2 <= end2)
			{
				if (a[begin1] < a[begin2])
				{
					tmp[j++] = a[begin1++];
				}
				else
				{
					tmp[j++] = a[begin2++];
				}
			}
			
			while (begin1 <= end1)
			{
				tmp[j++] = a[begin1++];
			}

			while (begin2 <= end2)
			{
				tmp[j++] = a[begin2++];
			}

			memcpy(a + i, tmp + i, sizeof(int) * (end2 - i + 1));
		}
		gap = gap * 2;
	}

}
void mergesortno(int* a, int sz)
{
	
	_mergesortno(a, sz);
}