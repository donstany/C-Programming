#include <stdio.h>
#include <stdlib.h>

#define lengthArr(array) sizeof(array) / sizeof(array[0])

/*
 * Given an array of n integers, write a linear search function that 
 * determines whether a given element exists in the array. On the first 
 * line you will receive the number n. On the second line, there will be 
 * n numbers, space-separated. On the third line, the search number will 
 * be given.
 */

int arr_contains(int array[], int arrLength, int num);

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
    
    int searchedNum;
    if (scanf("%d", &searchedNum) != 1)
    {
        printf("Invalid input!");
        return 1;
    }
    
    int length = lengthArr(numbers);
    int found = arr_contains(numbers, length, searchedNum);
    if (found)
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }
    
    return 0;
}

int arr_contains(int array[], int arrLength, int num)
{
    int i, found = 0;
    for (i = 0; i < arrLength; i++)
    {
        if (array[i] == num)
        {
            found = 1;
        }
    }
    
    return found;
}