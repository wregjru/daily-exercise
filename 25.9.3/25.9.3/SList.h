#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#define SLdata int
typedef struct SListNode
{
	SLdata data;
	struct SListNode* next;
}SLTnode;
void SLprint(SLTnode* node0);
SLTnode* SLTbuynode(SLdata x);
void SLfront(SLTnode* node0);
void SLback(SLTnode** node0, SLdata x);