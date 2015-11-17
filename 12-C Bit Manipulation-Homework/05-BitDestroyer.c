#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n, p;
    if (scanf("%d %d", &n, &p) != 2)
    {
        printf("Invalid input!");
        return 1;
    }
    
    int result = n & (~(1 << p));
    printf("%d", result);
    
    return 0;
}

