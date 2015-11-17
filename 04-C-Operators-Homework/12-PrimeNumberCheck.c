#include <stdio.h>

/*
 * Write an expression that checks if given positive integer 
 * number n (n ≤ 100) is prime (i.e. it is divisible without 
 * remainder only to itself and 1). Print true or false.
 */
int main() 
{
    int number;
    if (scanf("%d", &number) != 1)
    {
        printf("Invalid input!");
    }
    else
    {
        int isPrime = 1;
        if (number > 1)
        {
            int i;
            for (i = 2; i * i <= number; i++)
            {
                isPrime = number % i != 0;
                if (!isPrime)
                {
                    break;
                }
            }
            printf("%s", isPrime ? "true" : "false");
        }
        else
        {
            printf("false");
        }
    }
    
    return 0;
}

