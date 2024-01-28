#include "NumClass.h"
#include <stdio.h>

int isArmstrong(int num)
{
    if (num == 0) // 0 is not an armstrong number
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
    if (num == 0) // base case
    {
        return 0;
    }
    int digit = num % 10;                                     // extracting the first digit
    return (power(digit, pow) + recArmstrong(num / 10, pow)); // summing the power of the digit to the other digits
}

int isPalindrome(int num)
{
    if (num == reverseNumber(num, 0)) // if the number and his revers are equals return 1
    {
        return 1;
    }
    return 0;
}

int reverseNumber(int number, int rev_num)
{

    if (number <= 0) // base condition the number is zero or negative
    {
        return rev_num;
    }

    rev_num = (rev_num * 10) + (number % 10); // shiffting the digit to the left

    return reverseNumber(number / 10, rev_num); // recursive call without the last digit
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