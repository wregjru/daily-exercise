#define _CRT_SECURE_NO_WARNINGS
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//struct a
//{
//	char name[20];
//	int age;
//};
//int comp_age(const void*e1,const void*e2)
//{
//	int ret = ((struct a*)e1)->age-((struct a*)e2)->age;
//	return ret;
//}
//
//int main()
//{
//	struct a a1[] = { {"zhangsan",12} ,{ "lisi",13 } ,{ "wangwu",11 } };
//	int sz = sizeof(a1) / sizeof(a1[0]);
//	qsort(a1, sz, sizeof(a1[0]), comp_age);
//	return 0;
//
//}