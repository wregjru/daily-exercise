//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void print(int* arr,int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *arr);
//		arr++;
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//void bubble(int* arr, int sz)
//{
//	int tmp = 0;
//	for (int i = 0; i < sz; i++)
//	{
//		for (int j = sz - i - 1; j >= 0; j--)
//		{
//			if (arr[j - 1] > arr[j])
//			{
//				tmp = arr[j - 1];
//				arr[j - 1] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble(arr, sz);
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    char str1[] = "hello bit.";
//    char str2[] = "hello bit.";
//    char* str3 = "hello bit.";
//    char* str4 = "hello bit.";
//    if (str1 == str2)
//        printf("str1 and str2 are same\n");
//    else
//        printf("str1 and str2 are not same\n");
//
//    if (str3 == str4)
//        printf("str3 and str4 are same\n");
//    else
//        printf("str3 and str4 are not same\n");
//
//    return 0;
//}
//#include<string.h>
//void daoxu(char* arr, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int tmp = 0;
//	while (left < right)
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//void left(char* arr, int k,int sz)
//{
//	daoxu(arr, k);
//	daoxu(arr + k, sz - k);
//	daoxu(arr, sz);
//}
//int main()
//{
//	char arr[] = "AABCD";
//	char t[] = "BCDAA";
//	int sz = strlen(arr);
//	int flag = 0;
//	for(int k = 0;k<sz;k++)
//
//	{
//		left(arr, 1, sz);
//		if (strcmp(t, arr) == 0)
//		{
//			flag = 1;
//			break;
//		}
//		
//	}
//	printf("%d ", flag);
//	
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void find(int arr[3][4], int num, int* px, int* py)
//{
//	int x = 0;
//	int y = *py;
//	while (1)
//	{
//		if (x > *px || y < 0)
//		{
//			*px = 0;
//			*py = 0;
//			break;
//		}
//		if (num > arr[x][y])
//		{
//			x++;
//		}
//		else if (num < arr[x][y])
//		{
//			y--;
//		}
//		else
//		{
//			*px = x+1;
//			*py = y+1;
//			break;
//		}
//
//	}
//}
//int main()
//{
//	int arr[3][4] = { 1,2,4,5,2,3,6,7,4,8,9,10 };
//	int x = 2;
//	int y = 3;
//	int num = 0;
//	scanf("%d", &num);
//	find(arr, num, &x, &y);
//	printf("(%d,%d)", x, y);
//	return 0;
// }
//int main()
//{
//	int a = 0;
//	for (int i = 1; i < 5; i++)
//	{
//		if ((i != 1) + (i == 3) + (i == 4) + (i != 4) == 3)
//		{
//			a = i;
//			break;
//		}
//		
//	}
//	printf("%d", a);
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#define ALL 10
//void set_number(int arr[ALL][ALL])
//{
//	for (int i = 0; i < ALL; i++)
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			if ((j == 0) || (i == j))
//			{
//				arr[i][j] = 1;
//			}
//			else if ((i != 0) && (i != j))
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//
//		}
//	}
//}
//void yanghui(int arr[ALL][ALL])
//{
//	for (int i = 0; i < ALL; i++)
//	{
//		for (int j = 0; j < i + 1; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[ALL][ALL] = { 0 };
//	set_number(arr);
//	yanghui(arr);
//	return 0;
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//
//void calc(int (*pf)(int, int),int x,int y)
//{
//	printf("%d\n", pf(x, y));
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d %d", &x, &y);
//	int n = 0;
//	scanf("%d", &n);
//    do {
//        printf("请选择操作 (1:加, 2:减, 3:乘, 4:除, 0:退出): ");
//        scanf("%d", &n);
//
//        switch (n)
//        {
//        case 1:
//            calc(add, x, y);
//            break;
//        case 2:
//            calc(sub, x, y);
//            break;
//        case 3:
//            calc(mul, x, y);
//            break;
//        case 4:
//            calc(div, x, y);
//            break;
//        case 0:
//            printf("程序结束\n");
//            break;
//        default:
//            printf("无效选择，请重新输入\n");
//            break;
//        }
//    } while (n != 0);
//	
//	return 0;
//}
#include <stdio.h>
int runnian(int x)
{
    if (x / 100 == 0)
    {
        if (x / 400 == 0)
        {
            return 1;
        }
    }
    else
    {
        {
            if (x / 4 == 0)
                return 1;
        }
    }
    return 0;
}
int main() {
    int a, b;
    int n = 0;
    while (scanf("%d %d", &a, &b) != EOF)
    {
        if (runnian(a) == 1)
        {
            if (b == 2)
                n = 29;

        }
        if (runnian(a) == 0)
        {
            if (b == 2)
                n = 28;

        }
        if (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12)
        {
            n = 31;
        }
        if (b == 4 || b == 6 || b == 9 || b == 11)
        {
            n = 30;
        }
        printf("%d\n", n);
    }
    return 0;
}