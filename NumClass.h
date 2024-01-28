/* will return if a number is Armstrong number
An Armstrong number is an n-digit number that is equal to the sum of the nth powers of its digits.
For Example: 407 = 43 + 03 + 73 = 64 + 0 + 343 = 407
*/
int isArmstrong(int);
/* will return if a number is a palindrome */
int isPalindrome(int);
/* will return if a number is prime*/
int isPrime(int);
/*Strong number is a special number whose sum of the factorial of digits is equal to the original
number. For Example: 145 is strong number
1! + 4! + 5! = 145
*/
int isStrong(int);


//Our helper functions://

/* A simple implementation of factorial*/
int factorial(int);
/*An equivalent to the math.pow function using a loop implementation*/
int power(int, int);
/*given an int return the number of digits this number contains*/
int countDigits(int);
/*The recursive part of isArmstrong function in advancedClasificationRecursion*/
int recArmstrong(int, int);
/*The recursive part of isPalindrome function in advancedClasificationRecursion
ir reverse the number to check for equality*/
int reverseNumber(int, int);
