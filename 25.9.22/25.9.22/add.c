#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
typedef struct Bignum
{
	int* num;
	int data;//num的位数
}bignum;
void init(bignum*n1)
{
	int* new = (int*)calloc(1000,sizeof(int));
	n1->num = new;
	n1->data = 1;
	n1->num[0] = 1;
}
void mul(int a, bignum* n1)
{
	/*for (int k = 0; k < n1->data; k++)
	{
		if (n1->num[k] > 9)
		{
			n1->num[k] = (n1->num[k]) % 10;
			n1->num[k + 1]++;
		}
		if (n1->num[k] * 2 > 9)
		{
			n1->num[k] = (n1->num[k] * a) % 10;
			n1->num[k + 1]+= (n1->num[k] * a) / 10;
		}
		else
		{
			n1->num[k] = n1->num[k] * 2;
		}
	}*/
	//int carry = 0;

	//// 第一步：先进行乘法运算
	//for (int k = 0; k < n1->data; k++) {
	//	int product = n1->num[k] * a + carry;
	//	n1->num[k] = product % 10;
	//	carry = product / 10;
	//}

	//// 第二步：处理剩余的进位
	//while (carry > 0) {
	//	n1->num[n1->data] = carry % 10;
	//	carry /= 10;
	//	n1->data++;
	//}
	int carry = 0;
	for (int i = 0; i < n1->data; i++)
	{
		int all = n1->num[i] * a + carry;
		n1->num[i] = all % 10;
		carry =  all / 10;

	}
	while (carry > 0)
	{
		n1->num[n1->data] = carry % 10;
		n1->data++;
		carry /= 10;
	}
}
int main()
{
	bignum n1;
	init(&n1);
	int x = 0;
	scanf("%d", &x);
	for (int i = 0; i < x; i++)
	{
		mul(2,&n1);
	}
	if (n1.num[n1.data] != 0)
	{
		printf("%d", n1.num[n1.data]);
	}
	for (int j = n1.data - 1; j >= 0; j--)
	{
		printf("%d", n1.num[j]);
	}
	return 0;
}