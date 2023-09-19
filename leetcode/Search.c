/**
 * 请实现无重复数字的升序数组的二分查找
 *
 *
 * @param nums int整型一维数组
 * @param numsLen int nums数组长度
 * @param target int整型
 * @return int整型
 */
int search(int* nums, int numsLen, int target) {
    if (numsLen == 0) return -1;
    int left = 0, right = numsLen - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) return mid;
        if (nums[mid] < target) left = mid + 1;
        if (nums[mid] > target) right = mid - 1;
    }
    return -1;
}