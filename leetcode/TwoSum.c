#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize);

//int main()
//{
//    int target = 9;
//    int nums[4] = { 2,7,11,15 };
//    int size = 2;
//    int* result = NULL;
//    result=twoSum(nums, 2, target, &size);
//    printf(" % d, % d", result[0], result[1]);
//	return 0;
//}

/*
* 给定一个整数数组 nums 和一个整数目标值 target，
* 请你在该数组中找出 和为目标值 target  的那 两个 整数，并返回它们的数组下标。
*/
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int i, j;
    int* result = (int*)malloc(sizeof(int) * 2);
    *returnSize = 2;
    for (i = 0; i < numsSize - 1; i++)
    {
        for (j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                if (result != NULL) {
                result[0] = i;
                result[1] = j;
                return result;
                }
             }
        }
    }
    return result;
}