#include <stdio.h>

/*
 * Write an expression that checks if given point (x, y) is inside
 * a circle K({0, 0}, 2).
 */
int main() 
{
    double pointX, pointY;
    const char R = 2;
    if (scanf("%lf %lf", &pointX, &pointY) != 2)
    {
        printf("Invalid input!");
    }
    else
    {
        int isInside = (pointX * pointX) + (pointY * pointY) <= R * R;
        printf("Is inside: %s", isInside ? "Yes" : "No");
    }
    
    return 0;
}

