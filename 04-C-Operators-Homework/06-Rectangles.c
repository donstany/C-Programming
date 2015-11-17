#include <stdio.h>

/*
 * Write an expression that calculates rectangle’s perimeter and area 
 * by given width and height.
 */
int main() 
{
    double width, height, perimeter, area;
    if (scanf("%lf %lf", &width, &height) != 2)
    {
        printf("Invalid input!");
    }
    else
    {
        perimeter = (2 * width) + (2 * height);
        area = width * height;
        printf ("Perimeter is: %lf\nArea is: %lf", perimeter, area);
    }
    
    return 0;
}

