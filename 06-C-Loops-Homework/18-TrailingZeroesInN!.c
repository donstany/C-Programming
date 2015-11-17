#include <stdio.h>

/*
 * Write a program that calculates with how many zeroes the factorial of 
 * a given number n has at its end. Your program should work well for very 
 * big numbers, e.g. n=100000.
 */
int main() 
{
    int n;
    if (scanf("%d", &n) != 1)
    {
        printf("Invalid input!");
        return 1;
    }
    else
    {
        int i, j, zeroes = 0;
        for (i = 5; i <= n; i += 5)
        {
            for (j = i; j % 5 ==0; j /= 5)
            {
                zeroes++;
            }
        }
        
        printf("Number of zeroes in %d is : %d", n, zeroes);
    }
    
    return 0;
}

