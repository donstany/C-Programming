#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * Write a function that takes a string as input and replaces all 
 * occurrences of a digit (0-9) with a slash '/'. The function should NOT 
 * modify the original string. It should return the resulting string as 
 * result. The function should also notify the calling function how many 
 * digits were replaced. Find a way to do this using pointer parameters.
 * Tip: Be careful where you allocate the resulting string.
 */

char* replace_digits(char *array, int length, int *digits);

int main() 
{
    char *line, *string;
    size_t size = 0;
    getline(&line, &size, stdin);
    int length = strlen(line);
    int digits = 0;
    string = replace_digits(line, length, &digits);
    
    printf("\n");
    printf("%s%d digits were replaced", string, digits);
    
    free(string);
    free(line);
    
    return 0;
}

char* replace_digits(char *array, int length, int *digits)
{
    int i;
    char *result = malloc(length * sizeof(char));
    for (i = 0; i < length; i++)
    {
        if ((*(array + i) >= 48) && (*(array + i) <= 57))
        {
            *(result + i) = '/';
            *digits += 1;
        }
        else
        {
            *(result + i) = *(array + i);
        }
    }
    
    return result;
}