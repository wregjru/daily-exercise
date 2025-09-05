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
void SLfront(SLTnode** node0);
void SLback(SLTnode** node0, SLdata x);
void SLfront(SLTnode** node0, int x);
void delSLfront(SLTnode** node0);
void delSLback(SLTnode** node0);
SLTnode* findSL(SLTnode* node0, SLdata x);
void SLinsert(SLTnode** node0, SLTnode* pos, SLdata x);