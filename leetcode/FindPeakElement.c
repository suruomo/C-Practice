/**
 * 给定一个长度为n的数组nums，请你找到峰值并返回其索引。数组可能包含多个峰值，
 * 在这种情况下，返回任何一个所在位置即可。
 * 1.峰值元素是指其值严格大于左右相邻值的元素。
 *
 *
 * @param nums int整型一维数组
 * @param numsLen int nums数组长度
 * @return int整型
 */
int findPeakElement(int* nums, int numsLen) {
    int i = 0;
    if (nums[0] > nums[1])
    {
        return 0;
    }
    if (nums[numsLen - 2] < nums[numsLen - 1])
        return numsLen - 1;
    for (i = 1; i < numsLen - 1; i++)
    {
        if (nums[i - 1] < nums[i] && nums[i] > nums[i + 1])
            return i;
    }
    return 0;
}