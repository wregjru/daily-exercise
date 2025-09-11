#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>
typedef int STDataType;
typedef struct stack
{
	STDataType* a;
	int top;
	int capacity;
}ST;
void STInit(ST* pst);
void SYDestroy(ST* pst);
void add(ST* pst);
void Push(ST* pst, STDataType x);
void SLPop(ST* pst);
STDataType STTop(ST* pst);
bool STEmpty(ST* pst);
int STSize(ST* pst);
