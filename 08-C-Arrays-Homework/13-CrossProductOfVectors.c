#include <stdio.h>
#include <stdlib.h>

/*
 *The cross product of vectors is defined only in a dimension where n = 3. 
 * It takes as input two vectors and produces a new one in the same 
 * dimension. Each member of the resulting vector is a result of the 
 * determinant of the members from different rows in the first vector. 
 * Example: [a 1 , a 2 , a 3 ] x [b 1 , b 2 , b 3 ] = 
 * [ (a 2 *b 3 – a 3 *b 2 ), (a 3 *b 1 – a 1 *b 3 ), ( a 1 *b 2 – a 2 *b 1 ) ]
 * Note how the middle row is calculated with the terms backwards or you could
 * just take the negative of the regular calculation. On the first 3 input 
 * lines, you are given the members of the first vectors, and on the next 
 * ones, you are given the members of the second one. 
 */

void filling_vector(int *array, int length);
void cross_product_vectors(int *resultArr, int *firstArr, int *secondArr);

int main() 
{
    int firstVector[3], secondVector[3], resultVector[3];   
    filling_vector(firstVector, 3);
    filling_vector(secondVector, 3);
    cross_product_vectors(resultVector, firstVector, secondVector);
    printf("[%d, %d, %d]", 
            resultVector[0], resultVector[1], resultVector[2]);

    return 0;
}

void filling_vector(int *array, int length)
{
    int i;
    for (i = 0; i < length; i++)
    {
        scanf("%d", &array[i]);
    }
}

void cross_product_vectors(int *resultArr, int *firstArr, int *secondArr)
{
    resultArr[0] = (firstArr[1] * secondArr[2]) - 
                        (firstArr[2] * secondArr[1]);
    resultArr[1] = (firstArr[2] * secondArr[0]) - 
                        (firstArr[0] * secondArr[2]);
    resultArr[2] = (firstArr[0] * secondArr[1]) - 
                        (firstArr[1] * secondArr[0]);
}