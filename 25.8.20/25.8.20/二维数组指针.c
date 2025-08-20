#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void as(int (*p)[3])//不能int (*p)[2][3]，由于指针是一维的
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", *(*(p + i) + j));

		}
		printf("\n");
	}
}
int main()
{
	int a[2][3] = {1,2,3,2,3,4};
	as(a);
	return 0;
}