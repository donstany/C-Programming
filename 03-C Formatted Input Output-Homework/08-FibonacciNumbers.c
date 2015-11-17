#include <stdio.h>

/*
 * Write a program that reads a number n and prints on the console 
 * the first n members of the Fibonacci sequence (at a single line, separated 
 * by spaces) : 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, ....
 */
int main() 
{
    int n, i, j;
    if (scanf("%d", &n) != 1)
    {
        printf("Invalid input!");
    }
    else
    {
        int fibonacci[n];
        fibonacci[0] = 0;
        fibonacci[1] = 1;
        for (i = 2; i < n; i++)
        {
            fibonacci[i] = fibonacci[i - 2] + fibonacci[i - 1];
        }
        
        for (j = 0; j < n; j++)
        {
            printf("%d ", fibonacci[j]);
        }
    }
    
    return 0;
}

