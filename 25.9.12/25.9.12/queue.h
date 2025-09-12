#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<assert.h>
typedef int qdatatype;
typedef struct Queuenode
{
	struct Queuenode* next;
	qdatatype val;
}qnode;
typedef struct Queue
{
	int size;  
	qnode* phead;
	qnode* ptail;
}queue;
void queuepush(queue*pt, qdatatype x);
void queuepop(queue* pt);
void initqueue(queue* pt);
int size(queue* pt);
bool ifempty(queue* pt);

