#include <stdio.h>
#include <stdlib.h>

/*
 * Declare an array of integers and print it on the console. 
 * Do NOT use the indexer operator [].
 */

int main() 
{
    int numbers[] = { 5, 8, -1, 3 };
    size_t size = sizeof(numbers) / sizeof(int);
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", *(numbers + i));
    }
    
    return 0;
}

