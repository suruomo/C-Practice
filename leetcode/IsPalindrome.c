#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x);

int main()
{
    int x = 121;
    printf("%d", isPalindrome(x));
    return 0;
}
/*
* ����һ������ x ����� x ��һ���������������� true �����򣬷��� false ��
*/
bool isPalindrome(int x) {
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