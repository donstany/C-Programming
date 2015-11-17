#include <stdio.h>

/*
 * Write a program that shows the sign (+, - or 0) of the product
 * of three real numbers, without calculating it. Use a sequence of if 
 * operators.
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
        if (firstNumber == 0 || secondNumber == 0 || thirdNUmber == 0)
        {
            printf("0");
        }
        else if (firstNumber > 0 && secondNumber > 0 && thirdNUmber > 0)
        {
            printf("+");
        }
        else if (firstNumber < 0 && secondNumber < 0 && thirdNUmber < 0)
        {
            printf("-");
        }
        else if ((firstNumber < 0 ^ secondNumber < 0) && thirdNUmber > 0)
        {
            printf("-");
        }
        else if (firstNumber > 0 && (secondNumber < 0 ^ thirdNUmber < 0))
        {
            printf("-");
        }
        else
        {
            printf("+");
        }
    }
    
    return 0;
}

