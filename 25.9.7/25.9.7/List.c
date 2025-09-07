#define _CRT_SECURE_NO_WARNINGS
#include"List.h"
void initlist(list** pphead)
{
	*pphead = buynode(-1);
}
list* buynode(ltdatatype x)
{
	list* new = (list*)malloc(sizeof(list));
	new->data = x;
	new->next = new->prev = new;
	return new;
}