#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int HPDataType;
typedef struct Heap
{
	HPDataType* a;
	int size;
	int capacity;
}HP;
void swap(int* x, int* y);
void HPInit(HP* php);
void HPDestroy(HP* php);
void HPPush(HP* php, HPDataType x);
void HPPop(HP* php);
void AdjustDown(HPDataType* a, int n, int parent);
void HeapSort(int* a, int n);

