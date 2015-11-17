#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    char *input = NULL;
    size_t size = 0; 
    getline(&input, &size, stdin);
    size_t length = strlen(input);
    char reversed[length];
    int i, j;
    for (i = 0, j = length - 1; i < length; i++, j--)
    {
        reversed[i] = input[j];
    }
    
    reversed[i] = '\0';
    printf("%s", reversed);
    free(input);
    
    return 0;
}

