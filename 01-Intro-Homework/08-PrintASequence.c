#include <stdio.h>
/*
 * Write a program that prints the first 10 members of the 
sequence: 2, -3, 4, -5, 6, -7, ...
 */
int main() 
{
    int n;
    if (scanf("%d", &n) == 1)
    {
        int i;
        for (i = 2; i <= n + 1; i++)
        {
            if (i % 2 == 0)
            {
                printf("%d", i);
            }
            else 
            {
                printf("-%d", i);
            }
            
            if (i <= n)
            {
                printf(", ");
            }        
        }
    }
    
    return 0;
}

