#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int removeElement(int* nums, int numsSize, int val)
{
    int i = 0;
    int j = 0;
    int s = numsSize;
    for (i = 0; i < s; i++)
    {
        if (nums[i] == val)
        {
            for (j = i; j < s - 1; j++)
            {
                nums[j] = nums[j + 1];

            }
            s--;

        }
        
    }
    int k = 0;
    while (nums[k])
    {
        k++;
    }
    return k;


}
int main()
{
    int nums[13] = { 1,2,3,4,3,2,3 };
    int numsSize = 5;
    int val = 3;
    int k=removeElement(nums, 5, 3);
    for (int i = 0; i < k; i++)
    {
        printf("%d ",nums[i]);
    }
    return 0;
}