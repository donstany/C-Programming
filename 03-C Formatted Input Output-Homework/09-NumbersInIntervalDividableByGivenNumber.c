#include <stdio.h>

/*
 * Write a program that reads two positive integer numbers and prints 
 * how many numbers p exist between them such that the reminder of the
 *  division by 5 is 0.
 */
int main() 
{
    unsigned int start, end, i, p = 0;
    if (scanf("%u %u", &start, &end) != 2)
    {
        printf("Invalid input!");
    }
    else
    {
        for (i = start; i <= end; i++)
        {
            if (i % 5 == 0)
            {
                p++;
            }
        }
        
        printf("%u", p);
    }
    
    return 0;
}

