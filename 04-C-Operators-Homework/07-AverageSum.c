#include <stdio.h>

/*
 * Write a program that finds the average of the sum of 3 numbers.
 */
int main() 
{
    double firstNumber, secondNumber, thirdNumber, average;
    if (scanf("%lf %lf %lf", &firstNumber, &secondNumber, &thirdNumber) != 3)
    {
        printf("Invalid inut!");
    }
    else
    {
        average = (firstNumber + secondNumber + thirdNumber) / 3;
        printf("%lf\n", average);
    }
    
    return 0;
}

