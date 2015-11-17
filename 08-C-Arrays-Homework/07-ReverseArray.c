#include <stdio.h>
#include <stdlib.h>

/*
 * Write a program that reverses an array of numbers. The numbers should 
 * be entered one at a line. On the first input line you will be given 
 * the count of the numbers.
 */

int *reversed_numbers(int *array, int length);
void print_array(int *array, int length);

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
    
    int *reversedNums = reversed_numbers(numbers, n);
    printf("\n");
    print_array(reversedNums, n);
    free(reversedNums);
    
    return 0;
}

int *reversed_numbers(int *array, int length)
{
    int *reversed = malloc(sizeof(int) * length);
    int i, j;
    for (i = 0, j = length - 1; i < length; i++, j--)
    {
        reversed[i] = array[j];
    }
    
    return reversed;
}

void print_array(int *array, int length)
{
    int i;
    for (i = 0; i < length; i++)
    {
        if (i < length - 1)
        {
            printf("%d, ", array[i]);
        }
        else
        {
            printf("%d", array[i]);
        }
    }
}