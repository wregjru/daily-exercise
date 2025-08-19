#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define all 10
int main()
{
	int a[all] = { 1,2,3,4,5,6,7,8,9,11 };
	int left = 0;
	int right = all;
	for (int i = 0; i < all; i++)
	{
		if ((a[i] % 2) == 0)
		{
			for (int j = all-1; j > i; j--)
			{
				if ((a[j] % 2) != 0)
				{
					int h = 0;
					h = a[i];
					a[i] = a[j];
					a[j] = h;

				}
			}
		}
	}
	for (int t = 0; t < all; t++)
	{
		printf("%d ", a[t]);
	}
	return 0;
}