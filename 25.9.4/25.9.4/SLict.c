#include"SList.h"

void SLprint(SLTnode* node0)
{
	SLTnode* pn = node0;
	while (pn)
	{
		printf("%d\n", pn->data);
		pn = pn->next;
	}

}
SLTnode* SLTbuynode(SLdata x)
{
	SLTnode* newnode = (SLTnode*)malloc(sizeof(SLTnode));
	newnode->next = NULL;
	newnode->data = x;
	return newnode;
}
void SLfront(SLTnode** node0,SLdata x)
{
	SLTnode* newnode = SLTbuynode(x);
	newnode->next = *node0;
	*node0 = newnode;
}
void SLback(SLTnode** node0, SLdata x)
{
	SLTnode* newnode = SLTbuynode(x);
	SLTnode* ptail = *node0;
	if (*node0 == NULL)
	{
		*node0 = newnode;
	}
	else
	{
		while (ptail->next)
		{
			ptail = ptail->next;
		}
		ptail->next = newnode;
	}
}
void delSLfront(SLTnode** node0)
{
}
void delSLback(SLTnode** node0)
{
	assert(node0 && *node0);
	if ((*node0)->next == NULL)
	{
		free(*node0);
		*node0 = NULL;
	}
	SLTnode* ptail = *node0;
	SLTnode* move = *node0;
	while (move->next)
	{
		ptail = move;
		move = move->next;

	}
	free(move);
	move=NULL;
	ptail->next = NULL;
}