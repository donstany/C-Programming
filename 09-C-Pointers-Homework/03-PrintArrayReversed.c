#include <stdio.h>
#include <stdlib.h>

/*
 * You are given a sample array as input and your task is to print the 
 * array in reversed order using pointer arithmetic instead of indexing.
 */

int main() 
{
    int n;
    if (scanf("%d", &n) != 1)
    {
        printf("Invalid input!");
        return 1;
    }
    
    int i;
    int numbers[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }
    
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", *(numbers + i));
    }
    
    return 0;
}

