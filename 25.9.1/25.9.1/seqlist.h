//
//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//#define N 100
//typedef int SLDataType;//改名利于修改
//
//typedef struct seqlist
//{
//	SLDataType* arr;
//	int size;
//	int capacity;
//}SL;
//void IntSL(SL* ps);
//void SLpushback(SL* ps,SLDataType x);
//void SLpushfront(SL* ps, SLDataType x);
//void SLcheck(SL*ps, SLDataType x);
//void SLprint(SL*ps);
//void SLdelback(SL* ps);
//void SLdelfront(SL* ps);




































#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef struct SL
{
	int* arr;
	int size;
	int capacity;
}sl;
void initsl(sl*ps);
void add(sl* ps);
void addfront(sl* ps,int x);
void print(sl* ps);
