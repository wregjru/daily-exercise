#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int ltdatatype;
typedef struct list
{
	ltdatatype data;
	struct list* next;
	struct list* prev;
}list;
void initlist(list** pphead);
list* buynode(ltdatatype x);
void pushback(list* phead, ltdatatype x);//²»¸ÄÉÚ±øÎ»
void print(list* phead);
void pushfront(list* phead,ltdatatype x);
void delback(list* phead);
void delfront(list* phead);
