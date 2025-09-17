#define _CRT_SECURE_NO_WARNINGS
#include"queue.h"
void queuepush(queue* pt, qdatatype x)
{
	qnode* newnode = (qnode*)malloc(sizeof(qnode));
	if (newnode == NULL)
	{
		return;
	}
	newnode->val = x;
	newnode->next = NULL;
	if (pt->size == 0)
	{
		pt->ptail = newnode;
		pt->phead = newnode;
	}
	else
	{
		pt->ptail->next = newnode;
		pt->ptail = newnode;
	}
	pt->size++;
}
void queuepop(queue* pt)
{
	assert(pt->size);
	
	if (pt->size == 1)
	{
		pt->ptail = NULL;
		pt->phead = NULL;
	/*	qnode* dest = pt->phead;
		pt->phead = pt->phead->next;
		pt->ptail = pt->phead;
		free(dest);*/
	}
	else
	{
		qnode* dest = pt->phead;
		pt->phead = pt->phead->next;
		free(dest);
	}
	pt->size--;

}
void initqueue(queue* pt)
{
	pt->ptail = NULL;
	pt->phead = NULL;
	pt->size = 0;
}
int size(queue* pt)
{
	return pt->size;
}
bool ifempty(queue* pt)
{
	return pt->size;
}

