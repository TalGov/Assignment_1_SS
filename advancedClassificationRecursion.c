#include "NumClass.h"

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
    int count_d = countDigits(num);

    if (num < 0)
    {
        return 0;
    }

    if (num >= 0 && num <= 9)
    {
        return 1;
    }

    int tempLast = num % 10;
    int tempFirst = num / (power(num, count_d - 1));

    if (tempFirst != tempLast)
    {
        return 0;
    }

    num = num / 10;
    num = num % (power(num, count_d - 2));

    return isPalindrome(num);
}
int countDigits(int num)
{
    int count = 0;
    int tempN = num;

    for (; tempN != 0;)
    {
        tempN = tempN / 10;
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