////#define _CRT_SECURE_NO_WARNINGS
////#define _CRT_SECURE_NO_WARNINGS
////#define as 5
////#define bs 6
////#include<stdio.h>
////int main()
////{
////	int a[as] = { 1,4,5,23,67 };
////	int b[bs] = { 3,6,11,34,68,99 };
////	int c[as + bs] = {};
////	int i = 0;
////	int j = 0;
////	int count = 0;
////	while (1)
////	{
////		if (i < as && j < bs)
////		{
////			if (a[i] < b[j])
////			{
////				c[count] = a[i];
////				i++;
////				count++;
////			}
////			else if (a[i] > b[j])
////			{
////				c[count] = b[j];
////				j++;
////				count++;
////			}
////			else
////			{
////				c[count] = a[i];
////				c[count + 1] = b[j];
////				i++;
////				j++;
////				count = count + 2;
////			}
////			if (i >= as || j >= bs)
////				break;
////		}
////		if (i == as)
////		{
////			for (int w = j; w < bs; w++)
////			{
////				c[count] = b[w];
////				count++;
////			}
////			break;
////
////		}
////		if (j == bs)
////		{
////			for (int v = i; v < as; v++)
////			{
////				c[count] = a[v];
////				count++;
////			}
////			break;
////		}
////	}
////	for (int k = 0; k < as + bs; k++)
////	{
////		printf("%d ", c[k]);
////	}
////	return 0;
////}
//#define _CRT_SECURE_NO_WARNINGS
//#define _CRT_SECURE_NO_WARNINGS
//#define as 5
//#define bs 6
//#include<stdio.h>
//int main()
//{
//	int a[as] = { 1,4,5,23,67 };
//	int b[bs] = { 3,6,11,34,68,99 };
//	int c[as + bs] = {};
//	for (int k = 0; k < as + bs; k++) c[k] = 0;
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	while (1)
//	{
//		if (i < as && j < bs)
//		{
//			if (a[i] < b[j])
//			{
//				c[count] = a[i];
//				i++;
//				count++;
//			}
//			else if (a[i] > b[j])
//			{
//				c[count] = b[j];
//				j++;
//				count++;
//			}
//			else
//			{
//				c[count] = a[i];
//				c[count + 1] = b[j];
//				i++;
//				j++;
//				count = count + 2;
//			}
//			if (i >= as || j >= bs)
//				break;
//		}
//		
//	}
//	if (i == as)
//	{
//		for (int w = j; w < bs; w++)
//		{
//			c[count] = b[w];
//			count++;
//		}
//
//
//	}
//	if (j == bs)
//	{
//		for (int v = i; v < as; v++)
//		{
//			c[count] = a[v];
//			count++;
//		}
//
//	}
//	for (int k = 0; k < as + bs; k++)
//	{
//		printf("%d ", c[k]);
//	}
//	return 0;
//}