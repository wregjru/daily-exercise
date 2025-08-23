#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void my_memmove(void* des, void* src, int num)
{
	char* d = (char*)des;
	char* s = (char*)src;

	if (d - s)
	{
		for (int i = 0; i < num; i++)
		{
			*d = *s;
			d++;
			s++;
		}
	}
	else if (s - d)
	{
		for (int i = num; i > 0; i--)
		{
			*d = *s;
			d++;
			s++;
		}
	}
}

int main()
{
	int arr1[] = { 0,3,2,5,4,2,5,8,6,1 };
	my_memmove(arr1, arr1 + 2, 16);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}
	
	return 0;
}