#define _CRT_SECURE_NO_WARNINGS
down(int* a, int father, int sz)
{
	int child = 2 * father + 1;
	while (child < sz)
	{
		if (child + 1 < sz && a[child] < a[child + 1])
		{
			child++;
		}
		if (a[father] < a[child])
		{
			int tmp = a[child];
			a[child] = a[father];
			a[father] = tmp;
			father = child;
			child = child * 2 + 1;
		}
		else
			return;
	}
}
void sort(int* a, int sz)
{
	int end = sz - 1;
	while (end >= 0)
	{
		int tmp = a[end];
		a[end] = a[0];
		a[0] = tmp;
		down(a, 0, end);
		end--;
	}
}
void cteateheap(int* a, int sz)
{
	for (int i = (sz - 1) / 2; i >= 0; i--)
	{
		down(a,i,sz);
	}
}
void heapsort(int* a,int sz)
{
	cteateheap(a, sz);
	sort(a, sz);
}