#include <stdio.h>

/*
 * Write a program that enters a number n and after 
 * that enters more n numbers and calculates and prints their sum.
 */
int main() 
{
    int n, i;
    double sum, numbers;
    if (scanf("%d", &n) != 1)
    {
        printf("Invalid input!");
    }
    else
    {
        for (i = 0; i < n; i++)
        {
            if (scanf("%lf", &numbers) != 1)
            {
                printf("Invalid input!");
            }
            else
            {
                sum += numbers;
            }
        }
        
        printf("%lf", sum);
    }
    
    return 0;
}

