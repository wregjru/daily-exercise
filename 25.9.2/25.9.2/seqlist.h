#include"contact.h"
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#define N 100
typedef peoinfo SLDataType;//改名利于修改
typedef struct seqlist
{
	SLDataType* arr;
	int size;
	int capacity;
}SL;
void IntSL(SL* ps);
void SLpushback(SL* ps,SLDataType x);
void SLpushfront(SL* ps, SLDataType x);
void SLcheck(SL*ps, SLDataType x);
void SLprint(SL*ps);
void SLdelback(SL* ps);
void SLdelfront(SL* ps);
void SLinsert(SL* ps, int pos, SLDataType x);
void SLdel(SL* ps, int pos);
//int SLfind(SL* ps, SLDataType x);
