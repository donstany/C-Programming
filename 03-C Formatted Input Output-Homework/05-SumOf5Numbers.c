#include <stdio.h>

/*
 * Write a program that enters 5 numbers (given in a single line, 
 * separated by a space), calculates and prints their sum.
 */
int main()
{
    double firstNum, secondNum, thirdNum, fourthNum, fifthNum, sum;
    printf("Enter 5 numbers separated with spaces: ");
    if (scanf("%lf %lf %lf %lf %lf", 
            &firstNum,
            &secondNum,
            &thirdNum,
            &fourthNum,
            &fifthNum) != 5)
    {
        printf("Invalid input!");
    }
    else
    {
        sum = firstNum + secondNum + thirdNum + fourthNum + fifthNum;
        printf("%lf", sum);
    }
    
    return 0;
}

