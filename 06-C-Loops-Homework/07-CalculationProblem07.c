#include <stdio.h>

/*
 * In combinatorics, the number of ways to choose k different members out 
 * of a group of n different elements (also known as the number of 
 * combinations) is calculated by the following formula:
 * For example, there are 2598960 ways to withdraw 5 cards out of a standard 
 * deck of 52 cards. Your task is to write a program that calculates 
 * n! / (k! * (n-k)!) for given n and k (1 < k < n < 100). 
 * Try to use only two loops.
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
        unsigned long long result = 1;
        if (k > 1 && k < n && k < 100)
        {
            int diff = n - k;
            if (diff > k)
            {
                int i;
                for (i = n - k + 1; i <= n; i++)
                {
                    result *= i;
                }
                
                unsigned long long kFactorial = 1;
                
                for (i = 1; i <= k; i++)
                {
                    kFactorial *= i;
                }
                
                result /= kFactorial;
            }
            else
            {
                int i;
                for (i = k + 1; i <= n; i++)
                {
                    result *= i;
                }
                
                unsigned long long diffFactorial = 1;
                
                for (i = 1; i <= diff; i++)
                {
                    diffFactorial *= i;
                }
                
                result /= diffFactorial;               

            }
            
            printf("Result: %lld", result);
        }
        else
        {
            printf("The numbers should be 1 < k < n < 100");
        }
    }
    
    return 0;
}

