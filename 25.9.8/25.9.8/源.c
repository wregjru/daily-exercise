//#define _CRT_SECURE_NO_WARNINGS
//void jiaohuan(int* arr, int sz)
//{
//    int tmp = 0;
//    int left = 0;
//    int right = sz - 1;
//    while (left < right)
//    {
//        tmp = arr[left];
//        arr[left] = arr[right];
//        arr[right] = tmp;
//        left++;
//        right--;
//    }
//
//
//}
//void rotate(int* nums, int numsSize, int k)
//{
//    k = k % numsSize;
//    jiaohuan(nums, numsSize - k);
//    jiaohuan(nums + (numsSize - k), k);
//    jiaohuan(nums, numsSize);
//
//
//}
int missingNumber(int* nums, int numsSize)
{

    int x = 0;
    int n = numsSize;
    for (int i = 0; i <= n; i++)
    {
        x = x ^ i;
    }
    for (int i = 0; i < numsSize; i++)
    {
        x = x ^ nums[i];
    }
    return x;


}