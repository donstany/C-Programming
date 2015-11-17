#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n, p, v;
    if (scanf("%d %d %d", &n, &p, &v) != 3)
    {
        printf("Invalid input!");
        return 1;
    }
    
    int result;
    if (v == 0)
    {
        result = n & (~(1 << p));
    }
    else
    {
        result = n | (1 << p);
    }
    
    printf("%d", result);
    
    return 0;
}

