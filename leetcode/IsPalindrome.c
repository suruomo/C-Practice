#include <stdio.h>
#include <stdbool.h>

bool IsPalindrome(int x);

int main()
{
    int x = 121;
    printf("%d", IsPalindrome(x));
    return 0;
}
/*
* ����һ������ x ����� x ��һ���������������� true �����򣬷��� false ��
*/
bool IsPalindrome(int x) {
    if (x < 0)
        return false;
    else
    {
        long int a, b = 0;
        a = x;
        while (a != 0)
        {
            b = b * 10 + a % 10;
            a = a / 10;
        }
        if (x == b)
            return true;
        else
            return false;

    }

}