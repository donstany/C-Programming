#include <stdio.h>
#include <string.h>
#include <string.h>

/*
 * Write an expression that checks for given integer if its
 * third digit from right-to-left is 7. Print true or false.
 */
int main() 
{
    int number, thirdDigit;
    if (scanf("%d", &number) != 1)
    {
        printf("Invalid input");
    }
    else
    {
        thirdDigit = (number / 100) % 10;
        printf("%s", thirdDigit == 7 ? "true" : "false");
    }
    
    return 0;
}

