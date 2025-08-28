#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int duoshao(int juice, int bottle)
//{
//	if (bottle == 0)
//	{
//		return juice;
//	}
//	if (bottle == 1)
//	{
//		juice = juice + 1;
//		return juice;
//	}
//	if (bottle > 1)
//	{
//		juice = juice + bottle / 2;//注意juice和bottle的位置
//		bottle = bottle / 2 + bottle % 2;
//
//	}
//	return duoshao(juice, bottle);
//}
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int juice = money;
//	int bottle = money;
//	int i = duoshao(juice, bottle);
//	printf("%d", i);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	for (int i = 0; i < a; i++)
//	{
//		for (int i = 0; i < (a - 1)-i / 2; i++)
//		{
//			printf(" ");
//		}
//
//	}
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int shuwei(int num)
//{
//	int n = 1;
//	while (1)
//	{
//		num = num / 10;
//		if (num > 0)
//		{
//			n++;
//		}
//		if (num == 0)
//		{
//			return n;
//			break;
//		}
//
//	}
//}
//int main()
//{
//	int all = 0;
//	scanf("%d", &all);
//	int i = 0;
//	for (i = 1; i <= all; i++)
//	{
//		int he = 0;
//		int wei = 0;
//		int n = shuwei(i);//判断i为几位数
//		int j = 0;
//		int shuzi = i;//注意：不要直接用i做除法，否则会死循环
//
//		for (j = 1; j <= n; j++)
//		{
//			wei = shuzi % 10;//取出个位
//			shuzi = shuzi / 10;
//			int k = 0;
//			int mi = 1;
//			for (k = 1; k <= n; k++)//计算乘方,注意字符
//			{
//				mi = mi * wei;
//			}
//			he = he + mi;
//
//
//		}
//		if (he == i)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int all = 0;
//	all = a * (1 + 11 + 111 + 1111 + 11111);
//
//	printf("%d", all);
//	return 0;
//}
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 13; 
    int mid = n / 2; 

    for (int i = 0; i < n; i++) {
        int sp = abs(mid - i);
        int st = n - 2 * sp;
        for (int j = 0; j < sp; j++)
            printf(" ");
        for (int j = 0; j < st; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}