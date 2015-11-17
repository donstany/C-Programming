#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *input = NULL;
    size_t size = 0;
    getline(&input, &size, stdin);
    input[strlen(input) - 1] = '\0';
    char string[21];
    strncpy(string, input, 20);
    string[21] = '\0';
    size_t length = strlen(string);
    if (length < 20)
    {
        int count = 20 - length;
        char asterix[count];
        memset(asterix, '*', count);
        
        strncat(string, asterix, count);
    }
    
    printf("%s", string);
    free(input);
    
    return 0;
}

