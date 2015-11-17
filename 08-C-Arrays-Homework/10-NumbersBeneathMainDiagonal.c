#include <stdio.h>
#include <stdlib.h>

/*
 * You are given a matrix of numbers. Your task is to print out the numbers, 
 * one group at a line, which are stationed beneath the matrix’s main 
 * diagonal along with the diagonal itself. On the first input line, you are 
 * given the matrix’s rows and cols count.
 */

void fill_matrix(int rows, int cols, int matrix[][cols]);

int main() 
{
    int n;
    if (scanf("%d", &n) != 1)
    {
        printf("Invalid input!");
        return 1;
    }
    int matrix[n][n];
    fill_matrix(n, n, matrix);
    int i, j;
    printf("\n");
    for (i = 0; i < n; i ++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%-3d", matrix[i][j]);
        }
        
        printf("\n");
    }
    
    return 0;
}

void fill_matrix(int rows, int cols, int matrix[][cols])
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}