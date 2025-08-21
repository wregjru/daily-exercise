//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//struct a
//{
//	char name[20];
//	int age;
//};
//int comp_age(const void* e1, const void* e2)
//{
//	int ret = ((struct a*)e1)->age - ((struct a*)e2)->age;
//	return ret;
//}
//void myqsort(void* base, int sz, int width, int(*comp_age)(const void* e1, const void* e2))
//{
//	for (int i = 0; i < sz; i++)
//	{
//		for (int j = 0; j < sz-i-1; j++)
//		{
//			if (comp_age((char*)base+j*width,(char*)base+(j+1)*width))
//			{
//				/*for (int f = 0; f < width; f++)
//				{
//					char*dd=(char*)base + (j+1) * width+f;
//					(char*)base + (j + 1) * width+f= (char*)base + j * width + f;
//					(char*)base + j * width + f=char*dd;
//				}*/
//				char* elem1 = (char*)base + j * width;
//				char* elem2 = (char*)base + (j + 1) * width;
//				char temp;
//				for (int f = 0; f < width; f++)
//				{
//					temp = elem1[f];
//					elem1[f] = elem2[f];
//					elem2[f] = temp;
//				}
//			}
//		}
//	}
//}
//int main()
//{
//	struct a a1[] = { {"zhangsan",12} ,{ "lisi",13 } ,{ "wangwu",11 } };
//	int sz = sizeof(a1) / sizeof(a1[0]);
//	myqsort(a1, sz, sizeof(a1[0]), comp_age);
//	return 0;
//
//}