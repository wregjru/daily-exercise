#define _CRT_SECURE_NO_WARNINGS
#include"heap.h"
void swap(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;

}
void HPInit(HP* php)
{
	php->a = NULL;
	php->capacity = 0;
	php->size = 0;

}
void HPDestroy(HP* php)
{
	php->a = NULL;
	free(php->a);
	php->size = 0;
	php->capacity = 0;
}
void HPPush(HP* php, HPDataType x)
{
	if (php->size == php->capacity)
	{
		int nam = php->capacity == 0 ? 4 : php->capacity * 2;
		HPDataType* new = (HPDataType*)malloc(sizeof(HPDataType) * nam);
		php->capacity = nam;
		php->a = new;
	}
	php->size++;
	php->a[php->size] = x;
	int child = php->size - 1;
	int parent = (child - 1) / 2;
	
	
	while (child > 0)//先确定没越界再确定大小
	{
		if (php->a[child] < php->a[parent])
		{
			swap(&php->a[child], &php->a[parent]);
			child = parent;
			parent = (child - 1) / 2;
		}
		else
			break;
	}
	
	
}
void HPPop(HP* php)
{
	if (php->a == NULL)
	{
		return;
	}
	swap(&(php->a[php->size - 1]), &(php->a[0]));
	php->size--;
	AdjustDown(php->a, php->size, 0);

}
void AdjustDown(HPDataType* a, int n, int parent)
{
	int child = parent * 2 + 1;
	while (parent < (n - 1) / 2)
	{
		if (child<n - 1 && a[child] > a[child + 1])
		{
			child++;
		}
		if (a[child] < a[parent])//条件
		{
			swap(&a[parent], &a[child]);
			parent = child;
			child = child * 2 + 1;
		}
		else
			break;

	}
}
void HeapSort(int* a, int n)
{
	for (int i = (n - 2) / 2; i >= 0; i--)
	{
		AdjustDown(a, n, i);
	}
	for (int i = n - 1; i > 0; i--)
	{
		swap(&a[0], &a[i]);
		AdjustDown(a, i, 0);
	}
}