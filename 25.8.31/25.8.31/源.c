#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
struct c
{
	double s;
	int a;
	char arr[20];
};
#define OFFSETOF(member) ((int)&((struct c*)0)->member)
int main()
{
	int t = OFFSETOF(a);
	printf("%d,", t);

	return 0;
}