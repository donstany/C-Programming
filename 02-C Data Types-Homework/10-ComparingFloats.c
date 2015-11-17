#include <stdio.h>
#include <math.h>

/*
 * Write a program that safely compares floating-point numbers (double) with 
 * precision eps = 0.000001. Note that we cannot directly compare two 
 * floating-point numbers a and b by a==b because of the nature of the 
 * floating-point arithmetic.Therefore, we assume two numbers are equal if
 * they are more closely to each other than a fixed constant eps.
 */
int main() 
{
    printf("Enter two numbers to compare (separated with space): ");
    double firstNum;
    double secondNum;
    double eps = 0.000001;
    
    if (scanf("%lf %lf", &firstNum, &secondNum) != 2)
    {
        printf("Invalid input!\n");
    }
    else
    {
        double diff = fabs(firstNum - secondNum);
        if (diff >= eps)
        {
            printf("false\n");
        }
        else
        {
            printf("true\n");
        }   
    }
    
    return 0;
}

