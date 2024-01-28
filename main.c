#include "NumClass.h"
#include <stdio.h>

int main()
{
    int number1;
    int number2;
    int minNum;
    int maxNum;

    // input: enter the first number
    scanf("%d", &number1);

    //The number must be positive as required
    while (number1 < 0)
    {
        scanf("%d", &number1);
    }

    // input: enter the second number
    scanf("%d", &number2);

    //The number must be positive as required
    while (number2 < 0)
    {
        scanf("%d", &number2);
    }

    //Checks which is the minimum number and which is the maximum number
    if (number1 < number2)
    {
        minNum = number1;
        maxNum = number2;
    }
    else
    {
        minNum = number2;
        maxNum = number1;
    }

    //Using functions implemented to range between the numbers entered by the user
    printf("The Armstrong numbers are:");
    for (int i = minNum; i <= maxNum; i++)
    {
        if (isArmstrong(i)) //Armstrong num func
        {
            printf(" %d", i);
        }
    }
    printf("\nThe Palindromes are:");
    for (int i = minNum; i <= maxNum; i++)
    {
        if (isPalindrome(i)) //Palindrome num func
        {
            printf(" %d", i);
        }
    }
    printf("\nThe Prime numbers are:");
    for (int i = minNum; i <= maxNum; i++)
    {
        if (isPrime(i)) //Prime num func
        {
            printf(" %d", i);
        }
    }
    printf("\nThe Strong numbers are:");
    for (int i = minNum; i <= maxNum; i++)
    {
        if (isStrong(i)) //Strong num func
        {
            printf(" %d", i);
        }
    }
    printf("\n");
    return 0;
}