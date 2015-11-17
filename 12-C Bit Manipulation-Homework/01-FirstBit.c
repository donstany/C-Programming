#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n;
    if (scanf("%d", &n) != 1)
    {
        printf("Invalid input!");
        return 1;
    }
    
    int result = 1 & (n >> 1);
    printf("%d", result);
    
    return 0;
}

