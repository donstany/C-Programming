#include <stdio.h>
#include <stdlib.h>

int main() 
{
    unsigned int n;
    if (scanf("%u", &n) != 1)
    {
        printf("Invalid input!");
        return 1;
    }
    
    unsigned int mask = 7;
    unsigned int firstBits = (n & (mask << 3)) >> 3;
    unsigned int secondBits = (n & (mask << 24)) >> 24;
    n &= ~(mask << 3);
    n &= ~(mask << 24);
    n |= firstBits << 24;
    n |= secondBits << 3;
    
    printf("%u", n);
    
    return 0;
}

