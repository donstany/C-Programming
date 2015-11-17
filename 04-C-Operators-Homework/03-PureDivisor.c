#include <stdio.h>
#include <math.h>
/*
 * Write a program that prints if a number is divided by 
 * 9, 11 or 13 without remainder.
 */
int main() 
{
    int input;
    if (scanf("%d", &input) != 1)
    {
        printf("Invalid input!");
    }
    else
    {
        int result = abs(input % 9 == 0) || 
                        abs(input % 11 == 0) ||
                        abs(input % 13 == 0);
        printf("%d\n", result);
    }
    
    return 0;
}

