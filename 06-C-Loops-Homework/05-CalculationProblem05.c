#include <stdio.h>

/*
 * Write a program that, for a given two integer numbers n and x, calculates 
 * the sum S = 1 + 1!/x + 2!/x 2 + ... + n!/x n .Use only one loop. Print 
 * the result with 5 digits after the decimal point.
 */
int main() {
    int n, x;
    if (scanf("%d %d", &n, &x) != 2)
    {
        printf("Invalid input!");
        return 1;
    }
    else
    {
        double sum = 1, nFactorial = 1, multyX = 1;
        int i;
        for (i = 1; i <= n; i++)
        {
            nFactorial *= i;
            multyX *= x;
            sum += nFactorial / multyX;
        }
        
        printf("%.5lf", sum);
        
    }
    
    return 0;
}

