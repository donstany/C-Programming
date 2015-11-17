#include <stdio.h>

/*
 * Write a function get_max() with two parameters that returns the bigger 
 * of two integers. Write a program that reads 2 integers from the console 
 * and prints the largest of them using the function get_max(). Declare 
 * a function prototype before defining the function.
 */

int get_max(int firstNumber, int secondNumber);

int main() 
{
    int firstNum, secondNum;
    if (scanf("%d %d", &firstNum, &secondNum) != 2)
    {
        printf("Invalid input!");
        return 1;
    }
    
    int biggerNumber = get_max(firstNum, secondNum);
    printf("The bigger number is: %d", biggerNumber);
    
    return 0;
}

int get_max(int firstNumber, int secondNumber)
{
    if (firstNumber >= secondNumber)
    {
        return firstNumber;
    }
    
    return secondNumber;
}

