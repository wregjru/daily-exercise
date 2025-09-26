#define _CRT_SECURE_NO_WARNINGS
void _mergesort(int* arr, int*tmp,int begin, int end)
{
	if (begin >= end)
		return;
	int mid = (begin + end) / 2;
	_mergesort(arr, tmp, begin, mid);
	_mergesort(arr, tmp, mid + 1, end);
	int begin1 = begin;
	int end1 = mid;
	int begin2 = mid+1;
	int end2 = end;
	int i = begin;
	while (begin1 <= end1 && begin2 <= end2)
	{
		if (arr[begin1] < arr[begin2])
		{
			tmp[i++] = arr[begin1];
			begin1++;
		}
		else if (arr[begin1] >= arr[begin2])
		{
			tmp[i++] = arr[begin2++];
			
		}
	}
	while (begin1 <= end1)
	{
		tmp[i++]=arr[begin1++];
		
	}
	while (begin2 <= end2)
	{
		tmp[i++]=arr[begin2++];
		
	}
	for (int j = begin; j <= end; j++)
	{
		arr[j] = tmp[j];
	}
}
void mergesort(int* arr, int sz)
{
	int* tmp = (int*)malloc(sizeof(int) * sz);
	_mergesort(arr, tmp, 0, sz - 1);
}