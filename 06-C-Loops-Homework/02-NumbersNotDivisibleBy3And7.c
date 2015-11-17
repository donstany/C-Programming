#include <stdio.h>

/*
 * Write a program that enters from the console a positive integer n 
 * and prints all the numbers from 1 to n not divisible by 3 and 7, 
 * on a single line, separated by a space.
 */
int main() 
{
    int input;
    if (scanf("%d", &input) != 1)
    {
        printf("Invalid input!");
        return 1;
    }
    else
    {
        int i = 1;
        while (i <= input)
        {
            if ((i % 3 != 0) && (i % 7 != 0))
            {
                printf("%d ", i);
            }
            
            i++;
        }
    }
    
    return 0;
}

