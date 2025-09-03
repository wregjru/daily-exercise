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
void SLfront(SLTnode* node0)
{

}
void SLback(SLTnode** node0, SLdata x)
{
	SLTnode* newnode = SLTbuynode(x);
	SLTnode* ptail = node0;
	if (node0 == NULL)
	{
		node0 = newnode;
	}
	else
	{
		while (ptail)
		{
			ptail = ptail->next;
		}
		ptail->next = newnode;
		newnode->data = x;
	}
}