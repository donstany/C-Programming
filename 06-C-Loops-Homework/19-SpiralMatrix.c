#include <stdio.h>

/*
 * Write a program that reads from the console a positive integer number n 
 * (1 ≤ n ≤ 20) and prints a matrix holding the numbers from 1 to n*n in the 
 * form of square spiral like in the examples below.
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
        int matrix[n][n];
        int i, j, row = 0, col = 0;
        int maxRow = n - 1, maxCol = n - 1;
        int maxChars = n * n;
        int currentNum = 1;
        
        do
        {
            for (i = col; i <= maxCol; i++)
            {
                matrix[row][i] = currentNum;
                currentNum++;

            }
        
            row++;
            for (i = row; i <= maxRow; i++)
            {
                matrix[i][maxCol] = currentNum;
                currentNum++;
            }
        
            maxCol--;
            for (i = maxCol; i >= col; i--)
            {
                matrix[maxRow][i] = currentNum;
                currentNum++;
            }

            maxRow--;
            for (i = maxRow; i >= row; i--)
            {
                matrix[i][col] = currentNum;
                currentNum++;
            }
            col++;
        }
        while (currentNum <= maxChars);
        
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("%3d ", matrix[i][j]);
            }
            
            printf("\n");
        }
    }
    
    return 0;
}

