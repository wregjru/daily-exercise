#define _CRT_SECURE_NO_WARNINGS
#include"heap.h"
void HPInit(HP* php)
{
	php->a = NULL;
	php->size = 0;
	php->capacity = 0;
}
void HPDestroy(HP* php)
{
	free(php->a);
	php->a = NULL;
	php->size = 0;
	php->capacity = 0;
}
void AdjustUp(HPDataType* a, int child)
{
	int parent = (child - 1) / 2;
	while (child > 0)
	{
		if (a[child] < a[parent])
		{
			int tmp = a[parent];
			a[parent] = a[child];
			a[child] = tmp;
			child = parent;
			parent = (parent - 1) / 2;
		}
		else
		{
			break;
		}
	}
}
void HPPush(HP* php, HPDataType x)
{
	if (php->size == php->capacity)
	{
		int newheap = php->capacity == 0 ? 4 : (php->capacity) * 2;
		HPDataType* new = (HPDataType*)realloc(php->a,newheap * sizeof(HPDataType));
		if (new == NULL)
		{
			return;
		}
		php->a = new;
		php->capacity = newheap;
	}
	

	php->a[php->size] = x;
	php->size++;
	AdjustUp(php->a, php->size - 1);

}
void AdjustDown(HPDataType* a, int n, int parent)
{
	int child = parent * 2 + 1;
	if (child + 1 < n && a[child] > a[child + 1])
	{
		child = child + 1;
	}
	while (child < n)
	{
		
		if (a[child] < a[parent])
		{
			int tmp = a[child];
			a[child] = a[parent];
			a[parent] = tmp;
			parent = child;
			child = child * 2 + 1;
		}
		else
			break;

	}
}
void HPPop(HP* php)
{
	int tmp = php->a[php->size-1];
	php->a[php->size - 1] = php->a[0];
	php->a[0] = tmp;
	php->size--;
	AdjustDown(php->a, php->size, 0);

}
void HeapSort(int* a, int n)
{
	int end = n - 1;
	/*for (int i = 1; i < n; i++)
	{
		
		AdjustUp(a, i);
	}*/
	for (int i = (n - 2)/2; i >= 0; i--)
	{
		AdjustDown(a, end, i);
	}
	while (end > 0)
	{
		int tmp = a[end];
		a[end] = a[0];
		a[0] = tmp;
		AdjustDown(a, end, 0);
		end--;

	}
}