#include <stdio.h>

/*
 * Write a program that reads from the console a positive integer number 
 * n (1 ≤ n ≤ 20) and prints a matrix like in the examples below. 
 * Use two nested loops.
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
        int row, col;
        for (row = 0; row < n; row++)
        {
            for (col = row + 1; col <= n + row; col++)
            {
                printf("%d ", col);
            }

            printf("\n");
        }
    }
    
    return 0;
}

