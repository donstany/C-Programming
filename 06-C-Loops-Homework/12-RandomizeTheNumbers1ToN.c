#include <stdio.h>

/*
 * 
 */
int main() 
{
    int n;
    if (scanf("%d", &n) != 1)
    {
        printf("Invalid input!");
        return 1;
    }
    else
    {
        int numbers[n];
        int i;
        for (i = 0; i < n; i++)
        {
            numbers[i] = 0;
        }
        
        for (i = 0; i < n; i++)
        {
            int random = (rand() % n);
            if (numbers[random] == 0)
            {
                printf("%d ", random + 1);
                numbers[random] = 1;
            }
            else
            {
                i--;
            }
        }
    }
    return 0;
}

