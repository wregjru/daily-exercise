//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int shuwei(int a)//Ëã¼¸Î»Êý
//{
//	int i;
//	int k = a;
//	for (i = 0;k>0; i++)
//	{
//		k = k / 10;
//	}
//	return i;
//	
//}
//int cifang(int a)
//{
//	int mul = 1;
//	for (int k = 1; k <= a; k++)
//	{
//		mul = mul * 10;
//	}
//	return mul;
//}
//int main()
//{
//	int all = 0;
//	int a = 0;
//    scanf("%d", &a);
//	int n = shuwei(a);
//	int m = a;
//	for (int j = 0; j < n; j++)
//	{
//		all = all + ((m % 10)%2) * cifang(j);
//		m = m / 10;
//	}
//	printf("%d", all);
//
//	return 0;
//}