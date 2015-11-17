#include <stdio.h>
#include <stdlib.h>

int get_once_count(unsigned long long num);

int main()
{
    unsigned long long number;
    scanf("%llu", &number);
    int n;
    scanf("%d", &n);
    int i;
    unsigned long long sieve[n];
    for (i = 0; i < n; i++)
    {
        scanf("%llu", &sieve[i]);
        
    }

    int bits;
    for (bits = 0; bits < 64; bits++)
    {
        int bit = (number >> bits) & 1ULL;
        if (bit == 1)
        {
            for (i = 0; i < n; i++)
            {
                int sieveBit = (sieve[i] >> bits) & 1ULL;
                if (sieveBit == 1)
                {
                    number &= ~(1ULL << bits);
                    break;
                }
            }
        }
    }
    
    
    printf("%d", get_once_count(number));
    
    return 0;
}

int get_once_count(unsigned long long num)
{
    int i, countOfOnes = 0;
    for (i = 63; i >= 0; i--)
    {
        int currentBit = 1ULL & (num >> i);
        if ( currentBit == 1)
        {
            countOfOnes++;
        }
    }
    
    return countOfOnes;
}