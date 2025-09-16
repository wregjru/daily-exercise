#define _CRT_SECURE_NO_WARNINGS
#include"heap.h"
void createnum(int n)
{
	FILE* pf = fopen("text.txt", "w");

	
	for (int i = 0; i < n; i++)
	{
		int t = (rand() + i) % 1000;
		fprintf(pf, "%d\n", t);
	}
}

int main()
 {
	srand(time(0));
	
	//int t[] = { 3,2,1,6,7,34,22,35,40 };
	//int sz = sizeof(t) / sizeof(int);
	//HeapSort(t, sz);
	//createnum(1000);
	int* a;
	int k = 0;
	scanf("%d", &k);
	FILE* pf = fopen("text.txt", "r");
	a = (int*)malloc(sizeof(int) * k);
	for (int i = 0; i < k; i++)
	{
		fscanf(pf, "%d", &a[i]);
	}
	for (int j = (k - 2) / 2; j >= 0; j--)
	{
		AdjustDown(a, k, j);
	}
	int s = 0;
	while (fscanf(pf, "%d", &s) != EOF)
	{
		if (s > a[0])
		{
			a[0] = s;
			AdjustDown(a, k, 0);

		}
	}
	int b = 0;
	return 0;
}