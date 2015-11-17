#include <stdio.h>
#include <stdlib.h>

/*
 * You are given two matrices and you have to output a new matrix which is 
 * their sum. The sum of matrices is calculated by adding each of the members 
 * from the first matrix with each of the members of the second one and 
 * producing a number which is a member of a new matrix and is stationed in 
 * the same row and col. Write a program to calculate the sum of two matrices. 
 * On the first 2 lines, you are given the dimensions of the two matrices 
 * (In order for them to be added together, they must be of the same 
 * dimensions). The first line represents the rows of the matrices and the 
 * second one – the columns. On the next input lines, you are given the 
 * members of the matrices.
 */

void fill_matrix(int rows, int cols, int matrix[][cols]);

int main() 
{
    int rows, cols;
    if (scanf("%d %d", &rows, &cols) != 2)
    {
        printf("Invalid input!");
        return 1;
    }
    
    int firstMatrix[rows][cols];
    int secondMatrix[rows][cols];
    int resultMatrix[rows][cols];
    
    fill_matrix(rows, cols, firstMatrix);
    fill_matrix(rows, cols, secondMatrix);
    
    printf("\n");
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            resultMatrix[i][j] = firstMatrix[i][j] + secondMatrix[i][j];
            printf("%-3d", resultMatrix[i][j]);
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
