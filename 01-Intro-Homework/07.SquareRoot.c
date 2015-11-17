#include <stdio.h>
#include <math.h>
/*
 * Create a console application that calculates and prints 
 * the square root of the number 12345. 
 */
int main() 
{
    double number , result;
    if (scanf("%lf", &number) == 1)
    {        
        result = sqrt(number);
        printf("The square root of %.2f is %f", number, result);
    }
    else
    {
        printf("The input is not valid\n");
    }
            
    return 0;
}

