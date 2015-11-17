#include <stdio.h>
#include <math.h>
/*
 * Write a program that that prints if the number is both greater 
 * than 20 and odd.
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
        int result = abs(input % 2) && input > 20;
        printf("%d\n", result);
    }
    return 0;
}

