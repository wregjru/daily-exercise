#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define ALL 10
void set_number(int arr[ALL][ALL])
{
	for (int i = 0; i < ALL; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if ((j == 0) || (i == j))
			{
				arr[i][j] = 1;
			}
			else if ((i != 0) && (i != j))
			{
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
			}

		}
	}
}
void yanghui(int arr[ALL][ALL])
{
	for (int i = 0; i < ALL; i++)
	{
		for (int j = 0; j < i+1; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int arr[ALL][ALL] = { 0 };
	set_number(arr);
	yanghui(arr);
	return 0;
}