#define _CRT_SECURE_NO_WARNINGS
#include"stack.h"
void STInit(ST* pst)
{
	assert(pst);
	pst->a = NULL;
	pst->top = 0;//指向栈顶下一个位置
	pst->capacity = 0;
}
void SYDestroy(ST* pst)
{
	assert(pst);
	free(pst->a);
	pst->top = 0;
	pst->capacity = 0;

}
void add(ST* pst)
{
	if (pst->capacity == pst->top)
	{
		int newcapacity = pst->capacity == 0 ? 4 : pst->capacity * 2;
		STDataType* new = (STDataType*)realloc(pst->a,sizeof(STDataType)*(newcapacity));
		if (new == NULL)
		{
			return;
		}
		pst->a = new;
		pst->capacity = newcapacity;
	}
	


}
void Push(ST* pst, STDataType x)
{
	add(pst);
	pst->a[pst->top] = x;
	pst->top++;
}
void SLPop(ST* pst)
{
	assert(pst && pst->top > 0);
	pst->top--;
}
STDataType STTop(ST* pst)
{
	assert(pst&&pst->top>0);
	return pst->a[pst->top - 1];
}
bool STEmpty(ST* pst)
{
	assert(pst);
	return pst->top == 0;

}
int STSize(ST* pst)
{
	return pst->top;
}
