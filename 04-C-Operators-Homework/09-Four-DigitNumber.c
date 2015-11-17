#include <stdio.h>

/*
 * Write a program that takes as input a four-digit number in format abcd 
 * (e.g. 2011) and performs the following:
 * Calculates the sum of the digits (in our example 2+0+1+1 = 4).
 * Prints on the console the number in reversed order: 
 * dcba (in our example 1102).
 * Puts the last digit in the first position: dabc (in our example 1201).
 * Exchanges the second and the third digits: acbd (in our example 2101).
 * The number has always exactly 4 digits and cannot start with 0.
 */
int main()
{
    int inputNum, a, b, c, d, sum, reversedNumber, lastFirst, secondThird;
    if (scanf("%d", &inputNum) != 1)
    {
        printf("Invalid input!");
    }
    else
    {
        d = inputNum % 10;
        c = (inputNum / 10) % 10;
        b = (inputNum / 100) % 10;
        a = (inputNum / 1000) % 10;
        
        sum = a + b + c + d;
        reversedNumber = (d * 1000) + (c * 100) + (b * 10) + a;
        lastFirst = (d * 1000) + (a * 100) + (b * 10) + c;
        secondThird = (a * 1000) + (c * 100) + (b * 10) + d;
        
        printf("The sum of digits is: %d\n", sum);
        printf("Reversed number is: %d\n", reversedNumber);
        printf("Last digit at first position: %d\n", lastFirst);
        printf("Second digit at third position: %d\n", secondThird);
    }
    
    return 0;
}

