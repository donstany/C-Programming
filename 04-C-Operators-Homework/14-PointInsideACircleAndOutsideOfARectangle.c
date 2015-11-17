#include <stdio.h>

/*
 * Write an expression that checks for given point (x, y) if it is within 
 * the circle K({1, 1}, 1.5) and out of the rectangle R(top=1, left=-1, 
 * width=6, height=2). Print yes or no:
 */
int main() 
{
    double pointX, pointY;
    const double R = 1.5;
    if (scanf("%lf %lf", &pointX, &pointY) != 2)
    {
        printf("Invalid input!");
    }
    else
    {
        int isInsideCircle = ((1 - pointX) * (1 - pointX)) +
                                ((1 - pointY) * (1 - pointY)) <= R * R;
        int isInsideRectangle = (pointX >= -1 && pointX <= 5) &&
                                (pointY >= -1 && pointY <= 1);
        
        int inCircleOutRectangle = isInsideCircle && !isInsideRectangle;
        printf("Is inside: %s", inCircleOutRectangle ? "Yes" : "No");
    }
    return 0;
}

