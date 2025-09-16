#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<time.h>
typedef int HPDataType;
typedef struct Heap
{
	HPDataType* a;
	int size;
	int capacity;
}HP;
//void HPInit(HP* php);
//void HPDestroy(HP* php);
//void HPPush(HP* php, HPDataType x);
//void HPPop(HP* php);
//void AdjustDown(HPDataType* a, int n, int parent);
//void HeapSort(int* a, int n);
void createnum(int n)
{
	
	FILE* pf = fopen("data.txt","w");
	for (int i = 0; i < n; i++)
	{
		int t = (rand() + i) % 10000;
		fprintf(pf, "%d\n", t);
	}
}
void create(HP*hp,HPDataType x)
{
	if (hp->size == hp->capacity)
	{
		int mount = hp->capacity == 0 ? 4 : hp->capacity * 2;
		HPDataType* new = (HPDataType*)realloc(hp->a, mount*sizeof(HPDataType));
		hp->capacity = mount;
		hp->a = new;
		if (new == NULL)
		{
			return;
		}
	}
	
	hp->a[hp->size] = x;
	hp->size++;

}
void down(HPDataType* a, int n, int parent)
{
	int child = parent * 2 + 1;

	while (child < n)
	{
		if (child + 1 < n && a[child] > a[child + 1])
		{
			child = child + 1;
		}
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
int main()
{
	srand(time(0));
	createnum(1000000);
	HP hp;
	hp.a = NULL;
	hp.size = 0;
	hp.capacity = 0;
	int k = 0;
	scanf("%d", &k);
	hp.a = (HPDataType*)malloc(sizeof(int) * k);
	FILE* pf = fopen("data.txt", "r");
	for (int i = 0; i < k; i++)//输入对应数量数字
	{
	
		fscanf(pf, "%d", &hp.a[i]);
	}
	for (int t = (k - 2) / 2; t >= 0; t--)//建立小堆
	{
		down(hp.a, k, t);
	}
	int s = 0;
	while (fscanf(pf, "%d", &s) != EOF)
	{
		if (s > hp.a[0])
		{
			hp.a[0] = s;
			down(hp.a, k, 0);
		}
	}
	

	int b = 0;
	return 0;
}
