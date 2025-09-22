//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//
//typedef struct mulnum
//{
//	int* num;
//	int capacity;
//	int data;
//}mulnum;//数组可以存capacity位，现有data位数
//void init(mulnum* d)
//{
//	d->capacity = 0;
//	d->data = 0;
//	d->num = NULL;
//}
//void mule(mulnum* d)
//{
//	if ((d->capacity)<(d->data)*2)
//	{
//		int new = d->capacity == 0 ? 4 : (d->capacity) * 2;
//		d->capacity = new;
//		int* newdata = (int*)realloc(d->num, sizeof(int) * new);
//		d->capacity = new;
//		d->num = newdata;
//	}
//	for (int i = 0; i < d->data; i++)
//	{
//		int flag = 0;
//		if (d->num[i] * 2 >= 10)
//		{
//			flag = 1;
//			d->num[i] = (d->num[i] * 2) / 10;
//		}
//		
//	}
//	
//
//}
//int main()
//{
//	int a = 2;
//	int b = 0;//算2的b次方
//	scanf("%d", &b);
//	mulnum d;
//	init(&d);
//	mule(&d);
//	return 0;
//}