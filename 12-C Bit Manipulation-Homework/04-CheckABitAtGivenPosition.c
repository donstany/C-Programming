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
    
    int result = 1 & (n >> p);
    printf(result == 1 ? "true" : "false");
    
    return 0;
}

