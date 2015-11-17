#include <stdio.h>
#include <stdlib.h>
#include "array_manipulations.h"

#define lengthArr(array) sizeof(array) / sizeof(array[0])

/*
 * Declare the following functions in a header file (.h). Implement them in 
 * a separate .c file. Include the .h file in your main program and 
 * demonstrate the written functions.
 * arr_min() - returns the smallest element in the array
 * arr_max() - returns the largest element in the array
 * arr_clear() - sets all array elements to 0
 * arr_average() - returns the average of all elements
 * arr_sum() - returns the sum of all array elements
 * arr_contains() - returns whether the array contains the specified element
 * Bonus:
 * arr_merge() - receives two arrays, merges them into one and returns 
 * a pointer to the resulting array
 */

int main() 
{
    double numbers[] = { 2.3, 2, -3, 8 };
    int numbersLength = lengthArr(numbers);
    double nums[] = { 2.3, 2, -3, 8 };
    int numsLength = lengthArr(nums);
    double min = arr_min(numbers, numbersLength);
    double max = arr_max(numbers, numbersLength);
    
    printf("Min: %.3lf\nMax: %.3lf\n", min, max);
    
    arr_clear(numbers, numbersLength);
    printf("The array after setting it's elements to zeros:\n");
    print_array(numbers, numbersLength);
    
    printf("\n");
    double sum = arr_sum(nums, numsLength);
    double average = arr_average(nums, numsLength);
    printf("Sum: %.3lf\nAverage: %.3lf\n", sum, average);
    printf("Enter a number to check if the array has it: ");
    double numToCheck;
    int contains = 0;
    if (scanf("%lf", &numToCheck) != 1)
    {
        printf("Invalid input!");
    }
    else
    {
        contains = arr_contains(nums, numsLength, numToCheck);
        if (contains)
        {
            printf("The array, contains the number %.3lf\n", numToCheck);
        }
        else
        {
            printf("The array, doesn't contain the number %.3lf\n", numToCheck);
        }
    }
    
    printf("Merged array: ");
    int size = numbersLength + numsLength;
    double* merged = arr_merge(numbers, nums, numbersLength, numsLength);
    print_array(merged, size);
    
    return 0;
}

