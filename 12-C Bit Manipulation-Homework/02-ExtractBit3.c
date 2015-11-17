#include <stdio.h>
#include <stdlib.h>

int main() 
{
    unsigned int n;
    if (scanf("%d", &n) != 1)
    {
        printf("Invalid input!");
        return 1;
    }
    
    unsigned int result = 1 & (n >> 3);
    printf("%d", result);
    
    return 0;
}

