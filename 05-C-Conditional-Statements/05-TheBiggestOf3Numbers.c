#include <stdio.h>

/*
 * Write a program that finds the biggest of three numbers.
 */
int main() 
{
    double firstNumber, secondNumber, thirdNUmber;
    if (scanf("%lf %lf %lf", &firstNumber, &secondNumber, &thirdNUmber) != 3)
    {
        printf("Invalid input!");
    }
    else
    {
        if (firstNumber > secondNumber && firstNumber > thirdNUmber)
        {
            printf("%lf", firstNumber);
        }
        else if (firstNumber < secondNumber && secondNumber > thirdNUmber)
        {
            printf("%lf", secondNumber);
        }
        else
        {
            printf("%lf", thirdNUmber);
        }
    }
    
    return 0;
}

