#define _CRT_SECURE_NO_WARNINGS
#include"SList.h"


int main()
{
	//SLTnode* node1 = (SLTnode*)malloc(sizeof(SLTnode));
	//node1->data = 1;
	//SLTnode* node2 = (SLTnode*)malloc(sizeof(SLTnode));
	//node2->data = 2;
	//SLTnode* node3 = (SLTnode*)malloc(sizeof(SLTnode));
	//node3->data = 3;
	//SLTnode* node4 = (SLTnode*)malloc(sizeof(SLTnode));
	//node4->data = 4;
	//node1->next = node2;
	//node2->next = node3;
	//node3->next = node4;
	//node4->next = NULL;
	//SLTnode* node0=node1;
	SLTnode* node0 = NULL;
	SLback(node0, 1);
	SLprint(node0);
	return 0;
}
