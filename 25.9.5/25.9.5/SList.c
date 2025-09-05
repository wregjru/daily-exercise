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
void SLfront(SLTnode** node0, SLdata x)
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
	assert(node0 && *node0);
	if ((*node0)->next == NULL)
	{
		free(*node0);
		*node0 = NULL;
	}
	else
	{
		*node0 = (*node0)->next;
	}
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
	move = NULL;
	ptail->next = NULL;
}
SLTnode* findSL(SLTnode* node0, SLdata x)
{
	SLTnode* move = node0;
	while (move)
	{
		if (move->data == x)
		{
			return move;
		}
		move = move->next;

	}
	return NULL;
}
void SLinsert(SLTnode** node0, SLTnode* pos, SLdata x)
{
	assert(pos);
	SLTnode* newnode = SLTbuynode(x);
	SLTnode* prev = *node0;
	if (pos == *node0)
	{
		SLfront(node0, x);
	}
	else
	{
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		newnode->next = pos;
		prev->next = newnode;
	}
}