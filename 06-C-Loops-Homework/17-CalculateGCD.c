#include <stdio.h>
#include <math.h>

/*
 * Write a program that calculates the greatest common divisor (GCD) 
 * of given two integers a and b. Use the Euclidean algorithm 
 * (find it in Internet).
 */
int main() 
{
    int a, b;
    if (scanf("%d %d", &a, &b) != 2)
    {
        printf("Invalid input!");
        return 1;
    }
    else
    {
        int rest = 1;
        if (a > b)
        {
            while (rest > 0)
            {
                rest = a % b;
                a = b;
                b = rest;  
            }
            
            printf("%d", abs(a));
        }
        else
        {
            while (rest > 0)
            {
                rest = b % a;
                b = a;
                a = rest;  
            }
            
            printf("%d", abs(b));
        }
    }
    return 0;
}

