#include <stdio.h>
#include <math.h>

/*
 * Write a program that prints the n-th digit of a number
 * (from right to left). If no such digit exists, print a dash "-".
 */
int main() 
{
    //Must add -lm when compiling to work correctly!
    
    int number, n, nthDigit;
    if (scanf("%d %d", &number, &n) != 2)
    {
        printf("Invalid input!");
    }
    else
    {
        int nDigits = floor(log10(abs(number))) + 1;
        if (nDigits < n)
        {
            printf("-");
        }
        else
        {
            while (n > 0)
            {
                nthDigit = number % 10;
                number /= 10;
                n--;
            }

            printf("%d", nthDigit);    
        }        
    }
    
    return 0;
}

