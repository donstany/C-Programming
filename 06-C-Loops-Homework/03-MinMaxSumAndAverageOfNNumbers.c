#include <stdio.h>

/*
 * Write a program that reads from the console a sequence of n integer 
 * numbers and returns the minimal, the maximal number, the sum and the 
 * average of all numbers (displayed with 2 digits after the decimal point). 
 * Theinput starts by the number n (alone in a line) followed by n lines, 
 * each holding an integer number.
 */
int main() 
{
    int n;
    if (scanf("%d", &n) != 1)
    {
        printf("Invalid input!");
        return 1;
    }
    else
    {
        double min, max, sum, avg = 1;
        int numbers[n];
        int i, inputNum;
        for (i = 0; i < n; i++)
        {
            scanf("%d", &inputNum);
            numbers[i] = inputNum;
        }
        
        min = numbers[0];
        max = numbers[0];
        sum = numbers[0];
        for (i = 1; i < n; i++)
        {
            if (min > numbers[i])
            {
                min = numbers[i];
            }
            
            if (max < numbers[i])
            {
                max = numbers[i];
            }
            
            sum += numbers[i];
        }
        
        avg = sum / n;
        printf("min = %.2lf\nmax = %.2lf\nsum = %.2lf\navg = %.2lf",
                min, max, sum, avg);
    }
    
    return 0;
}

