/**
 * ����һ������Ϊn������nums�������ҵ���ֵ��������������������ܰ��������ֵ��
 * ����������£������κ�һ������λ�ü��ɡ�
 * 1.��ֵԪ����ָ��ֵ�ϸ������������ֵ��Ԫ�ء�
 *
 *
 * @param nums int����һά����
 * @param numsLen int nums���鳤��
 * @return int����
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