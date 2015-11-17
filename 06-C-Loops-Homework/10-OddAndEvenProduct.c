#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 30

/*
 * You are given n integers (given in a single line, separated by a space). 
 * Write a program that checks whether the product of the odd elements is 
 * equal to the product of the even elements. Elements are counted from 
 * 1 to n, so the first element is odd, the second is even, etc.
 */
int main() 
{
    char line[BUFFER_SIZE];
    fgets(line, BUFFER_SIZE, stdin);
    int oddProduct = 1, evenProduct = 1, isOdd = 1;
    char* token = strtok(line, " ");
    while (token != NULL)
    {
        int num = atoi(token);
        
        if (isOdd)
        {
            oddProduct *= num;
        }
        else
        {
            evenProduct *= num; 
        }
        
        isOdd = !isOdd;
        
        token = strtok(NULL, " ");
    }
    
    if (oddProduct == evenProduct)
    {
        printf("yes\n%d", oddProduct);
    }
    else
    {
        printf("no\nodd_product = %d\neven_product = %d",
                oddProduct, evenProduct);
    }
    
    return 0;
}

