#include <stdio.h>
#include <stdlib.h>

/*
 * Write a program that reads n numbers from the console and saves them 
 * in an array. The program should then print the elements of the array on 
 * the console.
 */
int main() 
{
    int n;
    if (scanf("%d", &n) != 1)
    {
        printf("Invalid input!");
        return 1;
    }
    
    int numbers[n];
    int i;
    for(i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }
    
    for (i = 0; i < n; i++)
    {
        printf("%d ", numbers[i]);
    }
    
    return 0;
}

