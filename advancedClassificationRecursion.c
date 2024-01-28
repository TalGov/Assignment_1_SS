#include "NumClass.h"
#include <stdio.h>

int isArmstrong(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else
    {
        int count_d = countDigits(num);
        return num == recArmstrong(num, count_d);
    }
}

int recArmstrong(int num, int pow)
{
    if (num == 0)
    {
        return 0;
    }
    int digit = num % 10;
    return (power(digit, pow) + recArmstrong(num / 10, pow));
}

int isPalindrome(int num)
{
    if (num == reverseNumber(num, 0))
    {
        return 1;
    }
    return 0;
}

int reverseNumber(int number, int rev_num)
{
    // base condition
    if (number <= 0)
    {
        return rev_num;
    }

    rev_num = (rev_num * 10) + (number % 10);

    return reverseNumber(number / 10, rev_num);
}

int countDigits(int num)
{
    int count = 0;

    while (num != 0)
    {
        num = num / 10;
        count++;
    }

    return count;
}

int power(int x, int _power)
{
    int res = 1;

    for (int i = 1; i <= _power; i++)
    {
        res = res * x;
    }
    return res;
}