#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    char *input = NULL;
    size_t size = 0;
    getline(&input, &size, stdin);
    size_t length = strlen(input);
    input[length - 1] = '\0';
    char *result = calloc(length - 1, sizeof(char));
    int i;
    strncat(result, &input[0], 1);
    for (i = 1; i < length - 1; i++)
    {
        int isSameChar = input[i] - input[i - 1];
        if (isSameChar != 0)
        {
            strncat(result, &input[i], 1);
        }
    }
    
    free(input);
    size_t resultLength = strlen(result) + 1;
    char * newResult = realloc(result, resultLength);
    if (!newResult)
    {
        printf("No memory to allocate!");
        return 1;
    }
    
    result = newResult;
    result[resultLength - 1] = '\0';
    printf("%s", result);
    free(result);
    
    return 0;
}

