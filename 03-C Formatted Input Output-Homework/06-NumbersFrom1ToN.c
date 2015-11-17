#include <stdio.h>

/*
 * Write a program that reads an integer number n from the console 
 * and prints all the numbers in the interval [1..n], each on a single line.
 */
int main() 
{
    int n, i;
    if (scanf("%d", &n) != 1)
    {
        printf("Invalid input!");
    }
    else
    {
        printf("\n");
        
        for (i = 1; i <= n; i++)
        {
            printf("%d\n", i);
        }
    }
    
    return 0;
}

