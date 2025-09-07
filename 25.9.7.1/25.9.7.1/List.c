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
void pushback(list* phead, ltdatatype x)
{
	assert(phead);
	list* newnode = buynode(x);
	newnode->next = phead;
	newnode->prev = phead->prev;
	phead->prev->next = newnode;
	phead->prev = newnode;
	
}
void print(list* phead)
{
	list* pcur = phead->next;
	while (pcur != phead)
	{
		printf("%d ", pcur->data);
		pcur = pcur->next;
	}

}
void pushfront(list* phead,ltdatatype x)
{
	list* new = buynode(x);
	new->next = phead->next;
	new->prev = phead;
	phead->next->prev = new;
	phead->next = new;

}
void delback(list* phead)
{
	assert(phead && phead->next != phead);
	list* del = phead->prev;
	del->prev->next = phead;
	phead->prev = del->prev;
	free(del);
	del = NULL;
}
void delfront(list* phead)
{
	assert(phead && phead->next != phead);
	list* del = phead->next;
	phead->next = del->next;
	del->next->prev = phead;
	free(del);
	del = NULL;
}