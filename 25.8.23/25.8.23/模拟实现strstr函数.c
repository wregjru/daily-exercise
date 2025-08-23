//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<assert.h>
//char* my_strstr(const char* arr1, const char* arr2)
//{
//	assert(arr1 && arr2);
//	const char* p1 = arr1;
//	const char* p2 = arr2;
//	const char* p = arr1;
//	while (p1)
//	{
//		p1 = p;
//		p2 = arr2;
//		while (*p1 != '\0' && *p2 != '\0' && *p1 == *p2)
//		{
//			p1++;
//			p2++;
//		}
//		if (*p2 == '\0')
//		{
//			return arr2;
//		}
//		p++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr1[] = "wergg@gdfd.wtsd@dgs.ghd";
//	char arr2[] = "gdfd";
//	printf("%s",my_strstr(arr1, arr2));
//	return 0;
//}