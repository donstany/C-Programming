#include <stdio.h>

/*
 * Which of the following values can be assigned to a variable of type float
 * and which to a variable of type double:
 * 34.567839023, 12.345, 8923.1234857, 3456.091?
 *  Write a program to assign the numbers in variables and print them to ensure
 *  no precision is lost.
 */

int main() 
{
    double firstNum = 34.567839023;
    float secondNum = 12.345;
    long double thirdNum = 8923.1234857;
    float forthNum = 3456.091;
    
    printf("%.9f, %.3f, %.7Lf, %.3f", 
            firstNum, secondNum, thirdNum, forthNum);
    
    return 0;
}

