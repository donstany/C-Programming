#include <stdio.h>
#include <stdlib.h>

/*
 * A multiplication of two matrices is performed by taking each of the rows 
 * of the first matrix and taking the dot product of it and each of the 
 * columns in the second matrix. The newly created matrix has dimensions 
 * RxC, where R is the number of rows of the first matrix and C is the 
 * number of columns of the second matrix.Note that a matrix multiplication 
 * is valid only if the number of rows of the first matrix is equal to the 
 * number of columns of the second matrix and the number of columns of the 
 * first one are equal to the number of rows of the second one. On the first .
 * two input lines you are given the dimensions of the first matrix. The second 
 * matrix has the same dimensions in inversed order.
 */

void fill_matrix(int rows, int cols, int matrix[][cols]);
int cell_product(int rows, int cols, 
                        int firstMatrix[][cols], int secondMatrix[][rows]);

int main()
{
    int rows, cols;
    if (scanf("%d %d", &rows, &cols) != 2)
    {
        printf("Invalid input!");
        return 1;
    }
    
    int firstMatrix[rows][cols];
    int secondMatrix[cols][rows];
    int resultMatrix[rows][rows];
    
    fill_matrix(rows, cols, firstMatrix);
    fill_matrix(cols, rows, secondMatrix);
    
    printf("\n");
    int i, j, k;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < rows; j++)
        {
            resultMatrix[i][j] = 0;
            for (k = 0; k < cols; k++)
            {
                resultMatrix[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
                    ;
            printf("%-5d", resultMatrix[i][j]);
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

