#include <stdio.h>

/*
 * Write a program that calculates n! / k! for given n and k (1 < k < n < 100). 
 * Use only one loop.
 */
int main() 
{
    int n, k;
    if (scanf("%d %d", &n, &k) != 2)
    {
        printf("Invalid input!");
        return 1;
    }
    else
    {
        unsigned long long factorial = 1;
        if (k > 1 && k < n && k < 100)
        {
            int i;
            for (i = k + 1; i <= n; i++)
            {
                factorial *= i;               
            }
            
            printf("Result: %llu", factorial);
        }
        else
        {
            printf("The numbers should be 1 < k < n < 100");
        }
        
    }
    
    return 0;
}

