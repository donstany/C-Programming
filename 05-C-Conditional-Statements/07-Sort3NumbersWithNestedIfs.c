#include <stdio.h>

/*
 * Write a program that enters 3 real numbers and prints them sorted 
 * in descending order. Use nested if statements. Don’t use arrays and 
 * the built-in sorting functionality.
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
            if (secondNumber > thirdNUmber)
            {
                printf("%lf %lf %lf", firstNumber, secondNumber, thirdNUmber);
            }
            else
            {
                printf("%lf %lf %lf", firstNumber, thirdNUmber, secondNumber);
            }
        }
        else if (firstNumber < secondNumber && secondNumber > thirdNUmber)
        {
            if (firstNumber > thirdNUmber)
            {
                printf("%lf %lf %lf", secondNumber, firstNumber, thirdNUmber);
            }
            else
            {
                printf("%lf %lf %lf", secondNumber, thirdNUmber, firstNumber);
            }
        }
        else
        {
            if (firstNumber > secondNumber)
            {
                printf("%lf %lf %lf", thirdNUmber, firstNumber, secondNumber);
            }
            else
            {
                printf("%lf %lf %lf", thirdNUmber, secondNumber, firstNumber);
            }
        }
    }
    return 0;
}

