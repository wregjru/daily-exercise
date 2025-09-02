#define _CRT_SECURE_NO_WARNINGS
#include"seqlist.h"
void SLcheck(SL*ps,SLDataType x)
{
	if (ps->capacity == ps->size)
	{
		int newcapacity = (ps->capacity == 0 ? 4 : 2 * ps->capacity);
		SLDataType* tmp = (SLDataType*)realloc(ps->arr, newcapacity * sizeof(SLDataType));
		if (tmp == NULL)
		{
			perror("fail");
			return;
		}
		ps->arr = tmp;
		ps->capacity = newcapacity;
	}
}
void IntSL(SL* ps)
{
	ps->arr = NULL;
	ps->size = ps->capacity = 0;
}
void SLpushback(SL* ps,SLDataType x)
{
	assert(ps);
	SLcheck(ps, x);
	ps->arr[ps->size] = x;
	ps->size++;
}
void SLpushfront(SL* ps, SLDataType x)
{
	assert(ps);
	SLcheck(ps, x);
	for (int i = ps->size; i > 0; i--)
	{
		ps->arr[i] = ps->arr[i - 1];
	}
	ps ->arr[0] = x;
	ps->size++;


}
void SLprint(SL* ps)
{
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d\n", ps->arr[i]);
	}
}
void SLdelback(SL* ps)
{
	assert(ps);
	if (ps->size == 0)
	{
		return;
	}
	--ps->size;//живЊ
}
void SLdelfront(SL* ps)
{
	assert(ps);
	for (int i = 0; i < (ps->size) - 2; i++)
	{
		ps->arr[i] = ps->arr[i + 1];
	}
	ps->size--;
}
void SLinsert(SL* ps, int pos, SLDataType x)
{
	assert(ps);
	assert(pos >= 0 && pos < ps->size);
	SLcheck(ps, x);
	for (int i = ps->size; i >pos ; i--)
	{
		ps->arr[i] = ps->arr[i - 1];
	}
	ps->arr[pos] = x;
	ps->size++;
}
void SLdel(SL* ps, int pos)
{
	assert(ps);
	assert(pos >= 0 && pos < ps->size);
	for (int i = pos; i < ps->size; i++)
	{
		ps->arr[i] = ps->arr[i + 1];
	}
	ps->size--;
}
//int SLfind(SL* ps, SLDataType x)
//{
//	assert(ps);
//	for (int i = 0; i < ps->size; i++)
//	{
//		if (ps->arr[i] == x)
//		{
//			
//			return i;
//		}
//	}
//	return -1;
//}