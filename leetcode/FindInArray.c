#include <stdbool.h>
/**
 * 在一个二维数组array中（每个一维数组的长度相同），每一行都按照从左到右递增的顺序排序，每一列都按照从上到下递增的顺序排序。
 请完成一个函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。
 *
 *
 * @param target int整型
 * @param array int整型二维数组
 * @param arrayRowLen int array数组行数
 * @param arrayColLen int* array数组列数
 * @return bool布尔型
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