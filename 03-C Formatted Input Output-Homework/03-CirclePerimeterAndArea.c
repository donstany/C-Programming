#include <stdio.h>
#include <math.h>

/*
 * Write a program that reads the radius r of a circle and prints
 * its perimeter and area formatted with 2 digits after the decimal point.
 */
int main() 
{
    double r, perimeter = 0, area;
    if (scanf("%lf", &r) != 1)
    {
        printf("Invalid input!");
    }
    else
    {
        perimeter = 2 * r * M_PI;
        area = r * r * M_PI;
        printf("The perimeter is: %.2lf\n", perimeter);
        printf("The area is: %.2lf\n", area);
    }
    
    return 0;
}

