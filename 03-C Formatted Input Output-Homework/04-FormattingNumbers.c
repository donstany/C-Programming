#include <stdio.h>

/*
 * Write a program that reads 3 numbers: an integer a (0 ≤ a ≤ 500), 
 * a floating-point b and a floating-point c and prints them in 4 virtual 
 * columns on the console. Each column should have a width of 10 characters. 
 * The number a shouldbe printed in hexadecimal, left aligned; then the number
 * a should be printed in binary form, padded with zeroes,then the number
 * b should be printed with 2 digits after the decimal point, right aligned;
 * the number c should be printed with 3 digits after the decimal point,
 * left aligned.
 */
int main() 
{
    int a, decimal = 0, i = 1;
    double b, c;
    int aAsBinary = 0;
    char *formatter = "|%-10X|%010d|%10.2lf|%-10.3lf|";

    
    if (scanf("%d %lf %lf", &a, &b, &c) != 3)
    {
        printf("Invalid input!");
    }
    else
    {
        decimal = a;
        while (decimal > 0)
        {
            int reminder;
            reminder = decimal % 2;
            decimal = decimal / 2;
            aAsBinary += reminder * i;
            i *= 10;       
        }
        
        printf(formatter, a, aAsBinary, b, c);
    }
    

    return 0;
}

