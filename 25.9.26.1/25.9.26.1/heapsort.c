#define _CRT_SECURE_NO_WARNINGS
void down(int* arr, int father,int sz)
{
	int son = 2 * father + 1;
	while (son<sz)
	{
		if (son+1< sz&&arr[son] < arr[son + 1])
		{
			son++;
		}
		if (arr[father] < arr[son])
		{
			int tmp = arr[father];
			arr[father] = arr[son];
			arr[son] = tmp;
			father = son;
			son = son * 2 + 1;
		}
		else
		{
			return;
		}
		
	}
	
}
void sort(int* arr, int sz)
{
	int all = sz-1;
	while (all > 0)
	{
		int tmp = arr[0];
		arr[0] = arr[all ];
		arr[all ] = tmp;
		down(arr, 0,all);
		all--;
	}
}
void createheap(int* arr, int sz)
{
	for (int i = (sz - 1) / 2; i >= 0; i--)//×¢Òâ£¬¼õÈ¥2
	{
		down(arr, i, sz);
	}
	
}
void heapsort(int* arr, int sz)
{
	createheap(arr, sz);
	sort(arr,sz);
}