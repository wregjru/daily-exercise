#define _CRT_SECURE_NO_WARNINGS
void _quicksort(int* arr, int start, int end)
{
	if (start > end)
	{
		return;
	}
	int f = arr[start];
	int left = start;
	int right = end;
	while (left < right)
	{

		while (left < right && arr[right] <= f)
		{
			right--;
		}
		while (left<right && arr[left]>=f)
		{
			left++;
		}
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
	}
	int tmp = arr[left];
	arr[left] = arr[start];
	arr[start] = tmp;
	
	_quicksort(arr, start, left - 1);
	_quicksort(arr, left + 1, end);
}
void quicksort(int* arr, int sz)
{
	_quicksort(arr, 0, sz - 1);
	
}