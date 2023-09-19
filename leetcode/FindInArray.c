#include <stdbool.h>
/**
 * ��һ����ά����array�У�ÿ��һά����ĳ�����ͬ����ÿһ�ж����մ����ҵ�����˳������ÿһ�ж����մ��ϵ��µ�����˳������
 �����һ������������������һ����ά�����һ���������ж��������Ƿ��и�������
 *
 *
 * @param target int����
 * @param array int���Ͷ�ά����
 * @param arrayRowLen int array��������
 * @param arrayColLen int* array��������
 * @return bool������
 */
bool Find(int target, int** array, int arrayRowLen, int* arrayColLen) {
    int row = 0;
    int col = *arrayColLen - 1;
    while (row < arrayRowLen && col >= 0)
    {
        if (array[row][col] == target)
        {
            return true;
        }
        else if(array[row][col]>target){
            col--;
        }
        else {
            row++;
        }
    }
    return false;
}