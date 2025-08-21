#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void calc(int (*pf)(int, int))
{
	int x = 0;
	int y = 0;
	scanf("%d %d", &x, &y);
	int ret = pf(x, y);
	printf("%d", ret);

}
int add(int a, int b)
{
	return a + b;
}
int sub(int a, int b)
{
	return a - b;
}
int mul(int a, int b)
{
	return a * b;
}
int div(int a, int b)
{
	return a / b;
}
int main()
{

	int i = 0;
	scanf("%d", &i);
	switch (i)
	{
	case 1:
		calc(add);
		break;
	case 2:
		calc(sub);
		break;
	case 3:
		calc(mul);
		break;
	case 4:
		calc(div);
		break;


	}
	return 0;
}