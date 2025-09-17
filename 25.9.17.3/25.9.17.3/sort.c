#define _CRT_SECURE_NO_WARNINGS
void InsertSort(int* a, int sz)
{
	int j;
	for (int i = 0; i < sz; i++)
	{
		int tmp = a[i];
		for (j = i ; j > 0 ; --j) 
		{
			a[j] = a[j-1];
			if (a[j-1] < tmp)
				break;
		}
		a[j] = tmp;
		
	}
	
}
int main()
{
	int a[10] = { 3,2,56,5,3,9,66,43,12,58 };
	InsertSort(a, 10);
	return 0;
}