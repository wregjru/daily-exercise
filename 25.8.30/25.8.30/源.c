#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
//void my_strncpy(char* src, char* dest, int n)
//{
//	assert(src);
//	assert(dest);
//    char* ret = dest; 
//	int i = 0;
//	while ((*dest++ = *src++) != '\0' && i <= n)
//    {
//		i++;
//    }
//	while (*dest++ != '\0' )
//	{
//		*dest = '\0';
//	}
//
//	return ret;
//}
//int main()
//{
//	char src[] = "Hello, World!";
//	char dest[20];
//	int n = 5;
//	my_strncpy(src, dest, n);
//	printf("%s", dest);
//	return 0;
//}
//void my_strncat(char* a1, char* a2, int n)
//{
//	while (*a1 != '\0')
//	{
//		a1++;
//	}
//	int i = 0;
//	while ((*a1++ = *a2++) != '\0' && i < n-1)
//	{
//		i++;
//	}
//	*(a1++) = '\0';
//}
//int main()
//{
//	char a1[20] = "hello";
//	char a2[] = "world";
//	int n = 3;
//	my_strncat(a1, a2, n);
//	
//	printf("%s", a1);
//	return 0;
//}
#include <stdio.h>
#include <assert.h>

//void* my_memcpy(void* dest, const void* src, size_t n) {
//    assert(dest != NULL && src != NULL);
//    void* ret = dest;
//    char* d = (char*)dest;
//    const char* s = (const char*)src;
//    for (size_t i = 0; i < n; i++) {
//        d[i] = s[i];
//    }
//    return ret;
//}
//
//int main() {
//    char src[] = "Hello, World!";
//    char dest[20];
//    my_memcpy(dest, src, 5);
//    dest[5] = '\0';
//    printf("Copied: %s\n", dest);
//    int src_arr[] = { 1, 2, 3, 4, 5 };
//    int dest_arr[5];
//
//    my_memcpy(dest_arr, src_arr, sizeof(src_arr));
//    for (int i = 0; i < 5; i++) {
//        printf("%d ", dest_arr[i]);
//    }
//    printf("\n");
//
//    return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void my_memmove(void* des, void* src, int num)
//{
//	char* d = (char*)des;
//	char* s = (char*)src;
//
//	if (d - s)
//	{
//		for (int i = 0; i < num; i++)
//		{
//			*d = *s;
//			d++;
//			s++;
//		}
//	}
//	else if (s - d)
//	{
//		for (int i = num; i > 0; i--)
//		{
//			*d = *s;
//			d++;
//			s++;
//		}
//	}
//}
//
//int main()
//{
//	int arr1[] = { 0,3,2,5,4,2,5,8,6,1 };
//	my_memmove(arr1, arr1 + 2, 16);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int a = 0x11223344;
//    char* pc = (char*)&a;
//    *pc = 0;
//    printf("%x\n", a);
//    return 0;
//}
//int main()
//{
//    char a[1000] = { 0 };
//    int i = 0;
//    for (i = 0; i < 1000; i++)
//    {
//        a[i] = -1 - i;
//    }
//    printf("%d", strlen(a));
//    return 0;
//}
//int main()
//{
//	int a = 1;
//    char* p = (char*)&a;
//    if (*p == 1) {
//        printf("小端\n");
//    }
//    else {
//        printf("大端\n");
//    }
//	return 0;
//}
//struct stu
//{
//	int num;
//	char name[10];
//	int age;
//};
//
//void fun(struct stu* p)
//{
//	printf("%s\n", (*p).name);
//	return;
//}
//
//int main()
//{
//	struct stu students[3] = { {9801,"zhang",20},
//							 {9802,"wang",19},
//					{9803,"zhao",18} };
//	fun(students + 1);
//	return 0;
//}
//int my_atoi(char* arr)
//{
//	int sz = 0;
//	char* sta = arr;
//	while (*sta != '\0')
//	{
//		sta++;
//		sz++;
//	}
//	int flag = 1;
//	int all = 0;
//	for (int i = 0; i < sz; i++)
//	{
//		if (arr[i] == '-')
//		{
//			flag = flag * (-1);
//		}
//		if (arr[i] >= '0' && arr[i] <= '9')
//		{
//			all = all * 10 + (arr[i]-'0');
//		}
//
//	}
//	return all * flag;
//
//}
//
//int main()
//{
//	char arr[10] = "asd -124a";
//	int k=my_atoi(arr);
//	printf("%d", k);
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS
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
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[50] = {};
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d ", &arr[i]);
//    }
//    int del = 0;
//    scanf("%d ", &del);
//    for (int j = 0; j < n; j++)
//    {
//        if (arr[j] != del);
//        printf("%d ", arr[j]);
//    }
//
//    return 0;
//}
union t
{
    int num;
    char b[4];
};
int main()
{
    union t q;
    q.num = 0x00000001;
    if (q.b[0] == 0x01) 
    {
        printf("小端\n");
    }
    if (q.b[0] == 0x00)
    {
        printf("大端\n");
    }

    return 0;
}