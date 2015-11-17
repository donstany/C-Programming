#include <stdio.h>
#include <stdlib.h>

#define lengthArr(array) sizeof(array) / sizeof(array[0])

/*
 * Write a program to read an array of numbers from the console, 
 * sort them and print them back on the console. Use a sorting algorithm 
 * of your choosing. The numbers should be entered one at a line. On the 
 * first input line you will be given the count of the numbers.
 */

void bubble_sort(int array[], int length);

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
    for (i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }
    
    int length = lengthArr(numbers);
    bubble_sort(numbers, length);
    
    for (i = 0; i < length; i++)
    {
        printf("%d ", numbers[i]);
    }
    
    return 0;
}

void bubble_sort(int array[], int length)
{
    int hasSwapped = 1;
    while (hasSwapped)
    {
        hasSwapped = 0;
        int i;
        for (i = 0; i < length - 1; i++)
        {
            if (array[i] > array[i + 1])
            {
                int oldValue = array[i];
                array[i] = array[i + 1];
                array[i + 1] = oldValue;
                hasSwapped = 1;
            }
        }
    }
}