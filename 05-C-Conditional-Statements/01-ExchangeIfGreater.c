#include <stdio.h>

/*
 * Write an if-statement that takes two integer variables a and b and
 * exchanges their values if the first one is greater than the second one.
 * As a result print the values a and b, separated by a space.
 */
int main() 
{
    double a, b, c;
    if (scanf("%lf %lf", &a, &b) != 2)
    {
        printf("Invalid input!");
    }
    else
    {
        if (a < b)
        {
            printf("Result: %.1lf %.1lf", a, b);
        }
        else
        {
            c = a;
            a = b;
            b = c;
            printf("Result: %.1lf %.1lf", a, b);
        }
    }
    
    return 0;
}

