#include <stdio.h>
#include <stdlib.h>

/*
 * A Dot product of two vectors is a scalar which is a result of the sum of 
 * the product of each of the two vectors’ members. For example, if we have 
 * the vector [a 1 , a 2 ... a n ] and the vector [b 1 , b 2 ... b n ], their 
 * dot product is:
 * (a 1 b 1 + a 2 b 2 ... + a n b n ). You are given the length n of each of 
 * the vectors on the first input line (In order to perform a dot product of 
 * two vectors, they have to be with equal dimensions). On the next n lines, 
 * you are given the members of the first vector, and on the next n ones, 
 * the members of the second one.
 */

void fill_arr(int *array, int length);

int main() 
{
    int n;
    if (scanf("%d", &n) != 1)
    {
        printf("Invalid input!");
        return 1;
    }
    
    int firstVector[n], secondVector[n];
    int i, product = 0;
    fill_arr(firstVector, n);
    fill_arr(secondVector, n);
    for (i = 0; i < n; i++)
    {
        product += firstVector[i] * secondVector[i];
    }
    
    printf("\n%d", product);
    
    return 0;
}

void fill_arr(int *array, int length)
{
    int i;
    for (i = 0; i < length; i++)
    {
        scanf("%d", &array[i]);
    }
}