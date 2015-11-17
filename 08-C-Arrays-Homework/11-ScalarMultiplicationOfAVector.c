#include <stdio.h>
#include <stdlib.h>

/*
 * A Scalar Multiplication of vectors is when you have a given vector 
 * (ex. [a 1 , a 2 ... a n ] ) and you want to multiply it by a scalar 
 * (a simple number). The multiplication is done by multiplying the scalar 
 * with each of the vector members. Write a program to perform a scalar 
 * multiplication of a vector. You are given an input number representing 
 * the dimension of a vector on the first input line. On the second input 
 * line, you are given the scalar to multiply the vector and on the next n 
 * lines, you are given the members of the vector.
 */

int main() 
{
    int dimension;
    if (scanf("%d", &dimension) != 1)
    {
        printf("Invalid input!");
        return 1;
    }
    
    int scalar;
    if (scanf("%d", &scalar) != 1)
    {
        printf("Invalid input!");
        return 1;
    }
    
    int i;
    int vector[dimension];
    for (i = 0; i < dimension; i++)
    {
        scanf("%d", &vector[i]);
    }
    
    for (i = 0; i < dimension; i++)
    {
        vector[i] *= scalar;
        printf("%d ", vector[i]);
    }
    
    return 0;
}

