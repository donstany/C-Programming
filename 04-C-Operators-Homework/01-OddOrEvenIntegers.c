#include <stdio.h>
#include <math.h>

/*
 * Write an expression that checks if given integer is odd or even.
 */
int main() 
{
    int input;
    if (scanf("%d", &input) != 1)
    {
        printf("Invalid input!");
    }
    else
    {
        int result = abs(input % 2);
        printf("%d\n", result);
    }
    
    return 0;
}

