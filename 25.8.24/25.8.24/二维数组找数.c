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