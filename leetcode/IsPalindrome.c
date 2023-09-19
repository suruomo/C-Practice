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
* 给你一个整数 x ，如果 x 是一个回文整数，返回 true ；否则，返回 false 。
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