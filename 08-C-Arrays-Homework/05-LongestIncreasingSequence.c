#include <stdio.h>
#include <stdlib.h>

/*
 * Write a program to find all increasing sequences inside an array of 
 * integers. The numbers should be entered one at a line. On the first 
 * input line you will be given the count of the numbers. Print the 
 * sequences in the order of their appearance in the input array, each at 
 * a single line. Separate the sequence elements by a space. Find also the 
 * longest increasing sequence and print it at the last line. If several 
 * sequences have the same longest length, print the left-most of them.
 */

void fill_arr(int *arr, int length);

int main() 
{
    int n;
    if (scanf("%d", &n) != 1)
    {
        printf("Invalid input!");
        return 1;
    }
    
    int numbers[n];
    fill_arr(numbers, n);
    int i, j, start = 0, end = 0;
    int bestEnd = 1, bestCount = 0;
    printf("\n");
    for (i = 1; i <= n; i ++)
    {
        int count = 0;
        if (numbers[i] > numbers[i - 1])
        {
            end++;
        }
        else
        {
            for (j = start; j <= end; j++)
            {
                printf("%d ", numbers[j]);
            }
            
            printf("\n");
            end++;
            count = end - start;
            start = end;            
        }
        
        if (i == n)
        {
            for (j = start; j < end; j++)
            {
                printf("%d ", numbers[j]);
            }
            
            count = end - start;
        }
        
        if (bestCount < count)
        {
            bestCount = count;
            bestEnd = end;
        }
    }
    
    printf("\nLongest: ");
    for (i = bestEnd - bestCount; i < bestEnd; i++)
    {
        printf("%d ", numbers[i]);
    }
    
    printf("\n");
    
    return 0;
}

void fill_arr(int *arr, int length)
{
    int i;
    for (i = 0; i < length; i++)
    {
        scanf("%d", &arr[i]);
    }
}