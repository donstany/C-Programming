#include <stdio.h>

/*
 * Write a program that reads 3 real numbers from the console 
 * and prints their sum.
 */
int main() 
{
    double firstNum, secondNum, thirdNum;    
    printf("Enter three numbers separated with space: ");
    if (scanf("%lf %lf %lf", &firstNum, &secondNum, &thirdNum) !=3)
    {
        printf("Invalid input!");
    }
    else
    {
        double sum = firstNum + secondNum + thirdNum;
        printf("The sum of the numbers is: %.2lf", sum);
    }
            
    return 0;
}

