#include <stdio.h>

/*
 * Write an expression that calculates trapezoid's area by given 
 * sides a and b and height h.
 */
int main() 
{
    double a, b, h, area;
    if (scanf("%lf %lf %lf", &a, &b, &h) != 3)
    {
        printf("Invalid input!");
    }
    else
    {
        area = (a + b) / 2 * h;
        printf("%lf", area);
    }
    
    return 0;
}

