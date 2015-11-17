#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 50

/*
 * Write a function that reverses the digits of a given floating-point
 * number. The function should receive a double number and a pointer to 
 * an integer variable. In case of format error, it should set error to 
 * 1 and in case of success to 0. Declare a function prototype before 
 * defining the function.
 */

double reverse(char* number, int *error);

int main() 
{
    char input[BUFFER_SIZE];
    fgets(input, BUFFER_SIZE, stdin);
    int error;
    double reversed = reverse(input, &error);
    if (error != 1)
    {
        printf("%.3lf", reversed);
    }
    else
    {
        printf("Invalid format");
    }
    
    return 0;
}

double reverse(char* number, int *error)
{
    *error = 0;
    
    int i,j, length = strlen(number);
    char reversed[length];
    for (i = 0, j = length - 2; i < length; i++, j--)
    {
        reversed[i] = number[j];
    }

    char* remainder;
    double reversedNum = strtod(reversed, &remainder);
    if (*remainder != '\0')
    {
        *error = 1;
        return 0;
    }
    
    return reversedNum;
    
}

