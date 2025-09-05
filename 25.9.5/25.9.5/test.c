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
	SLback(&node0, 1);
	SLback(&node0, 2);
	SLback(&node0, 3);
	SLTnode* find=findSL(node0,2);
	
	//if (find)
	//{
	//	printf("сп");
	//}
	SLinsert(&node0, find, 55);
	//SLback(&node0, 1);
	//SLback(&node0, 1);
	//SLback(&node0, 1);
	//SLfront(&node0, 2);
	SLprint(node0);
	return 0;
}
