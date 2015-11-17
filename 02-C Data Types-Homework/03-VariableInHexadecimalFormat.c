#include <stdio.h>

/*
 * Declare an integer variable and assign it with the value 254 in hexadecimal 
 * format (0x##). Use a calculator online tofind its hexadecimal 
 * representation. Print the variable and ensure that the result is "254".
 */

int main() 
{
    int numAsHex = 0xFE;
    
    printf("The %d as hexadecimal is : %X", numAsHex, numAsHex);
    
    return 0;
}

