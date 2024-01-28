#include "NumClass.h"

int isArmstrong(int num)
{
    // count the digits of the number
    int count_d = countDigits(num);

    //The function works on positive numbers
    if (num < 0)
    {
        return 0;
    }

    int sum = 0;
    int tempN = num;

    //Each digit of the number is raised to the power of the length of the number and then sum up all the calculations
    while (tempN != 0)
    {
        sum = sum + power(tempN % 10, count_d);
        tempN = tempN / 10;
    }

    //Return 1 if the calculated amount is equal to the original number, 0 otherwise
    return num == sum;
}

int isPalindrome(int num)
{
    // count the digits of the number
    int count_d = countDigits(num);
    //An array that will hold the digits of the number
    int arr[12] = {0};
    int tempN = num;

    // //The function works on positive numbers
    if (num < 0)
    {
        return 0;
    }

    //Splits the number into digits and puts it in the array
    for (int i = 0; i < count_d; i++)
    {
        arr[i] = tempN % 10;
        tempN = tempN / 10;
    }

    //Go through the array from the beginning and the end using a loop, and check if the values are equal or not
    for (int i = 0; i <= count_d / 2; i++)
    {
        int j = count_d - 1 - i;
        if ((arr[i] - arr[j]) != 0)
        {
            return 0;
        }
    }
    return 1;
}

int countDigits(int num)
{
    int count = 0;
    int tempN = num;

    //count the digits of the number by dividing by ten 
    while (tempN != 0)
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