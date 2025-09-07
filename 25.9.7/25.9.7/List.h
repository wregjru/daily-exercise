#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int ltdatatype;
typedef struct list
{
	ltdatatype data;
	list* next;
	list* prev;
}list;
void initlist(list** pphead);
list* buynode(ltdatatype x);