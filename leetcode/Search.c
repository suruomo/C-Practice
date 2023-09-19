/**
 * ��ʵ�����ظ����ֵ���������Ķ��ֲ���
 *
 *
 * @param nums int����һά����
 * @param numsLen int nums���鳤��
 * @param target int����
 * @return int����
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