#include "NumClass.h"

int isStrong(int num)
{
    int sum = 0;
    int tempN = num;

    for (; tempN != 0;)
    {
        sum = sum + factorial(tempN % 10);
        tempN = tempN / 10;
    }

    if (sum == num)
    {
        return 1;
    }
    return 0;
}

int isPrime(int num)
{
    if (num <= 1)
    {
        return 0;
    }

    for (int i = 2; (i * i) <= num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int factorial(int num)
{
    if (num == 0)
    {
        return 1;
    }
    return (num * factorial(num - 1));
}