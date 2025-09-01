//#define _CRT_SECURE_NO_WARNINGS
//#include"seqlist.h"
//void SLcheck(SL*ps,SLDataType x)
//{
//	if (ps->capacity == ps->size)
//	{
//		int newcapacity = (ps->capacity == 0 ? 4 : 2 * ps->capacity);
//		SLDataType* tmp = (SLDataType*)realloc(ps->arr, newcapacity * sizeof(SLDataType));
//		if (tmp == NULL)
//		{
//			perror("fail");
//			return;
//		}
//		ps->arr = tmp;
//		ps->capacity = newcapacity;
//	}
//}
//void IntSL(SL* ps)
//{
//	ps->arr = NULL;
//	ps->size = ps->capacity = 0;
//}
//void SLpushback(SL* ps,SLDataType x)
//{
//	assert(ps);
//	SLcheck(ps, x);
//	ps->arr[ps->size] = x;
//	ps->size++;
//}
//void SLpushfront(SL* ps, SLDataType x)
//{
//	assert(ps);
//	SLcheck(ps, x);
//	for (int i = ps->size; i > 0; i--)
//	{
//		ps->arr[i] = ps->arr[i - 1];
//	}
//	ps ->arr[0] = x;
//	ps->size++;
//
//
//}
//void SLprint(SL* ps)
//{
//	for (int i = 0; i < ps->size; i++)
//	{
//		printf("%d\n", ps->arr[i]);
//	}
//}
//void SLdelback(SL* ps)
//{
//	assert(ps);
//	if (ps->size == 0)
//	{
//		return;
//	}
//	--ps->size;//живЊ
//}
//void SLdelfront(SL* ps)
//{
//	assert(ps);
//	for (int i = 0; i < (ps->size) - 2; i++)
//	{
//		ps->arr[i] = ps->arr[i + 1];
//	}
//	ps->size--;
//}











#include"seqlist.h"

void add(sl* ps)
{
	int new = (ps->capacity = 0 ? 4 : 2*ps->capacity ); 
	int* tmp = (int*)realloc(ps->arr, sizeof(int) * new);
	if (tmp == NULL)
	{
		perror("fail");
		return;
	}
	ps->arr = tmp;
	ps->capacity = new;
}


void initsl(sl* ps)
{
	ps->size = 0;
	ps->capacity = 0;
	ps->arr = NULL;
}
void addfront(sl* ps,int x)
{
	if (ps->size == ps->capacity)
	{
		add(ps);
	}
	for (int i = 0; i < ps->size; i++)
	{
		ps->arr[i + 1] = ps->arr[i];
	}
	ps->arr[0] = x;
	ps->size++;
}
void print(sl* ps)
{
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d\n", ps->arr[i]);
	}
}