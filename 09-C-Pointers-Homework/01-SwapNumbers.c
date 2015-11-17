#include <stdio.h>
#include <stdlib.h>

/*
 * Implement a function which takes as input two numbers and swaps their 
 * values. The declaration of the function should be something like:
 * void swap(int *first, int *second)
 */

void swap(int *first, int *second);

int main() 
{
    int firstNum, secondNum;
    if (scanf("%d %d", &firstNum, &secondNum) != 2)
    {
        printf("Invalid input!");
        return 1;
    }
    
    printf("Original numbers: %d %d\n", firstNum, secondNum);
    swap(&firstNum, &secondNum);
    printf("Numbers after swap: %d %d\n", firstNum, secondNum);
    
    return 0;
}

void swap(int *first, int *second)
{
    int oldValue;
    oldValue = *first;
    *first = *second;
    *second = oldValue;    
}