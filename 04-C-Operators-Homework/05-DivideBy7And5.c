#include <stdio.h>
#include <math.h>

/*
 * Write a Boolean expression that checks for given integer if it 
 * can be divided (without remainder) by 7 and 5 in the same time.
 */
int main() 
{
    int input, result;
    if (scanf("%d", &input) != 1)
    {
        printf("Invalid input!");
    }
    else
    {
        if (input != 0)
        {
            result = abs(input % 5 == 0) && 
                       abs(input % 7 == 0);
        }
        
        printf("%d\n", result);
    }
    return 0;
}

