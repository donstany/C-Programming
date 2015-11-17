#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 50

/*
 * Write a function that takes determines the position of the rightmost 
 * occurrence of a character ch in a string str. If no such character 
 * exists, the function should return -1.
 */

int last_char_occurance(char* string, char ch);

int main() 
{
    char str[BUFFER_SIZE];
    char cha[BUFFER_SIZE];
    fgets(str, BUFFER_SIZE, stdin);
    fgets(cha, BUFFER_SIZE, stdin);
    
    printf("%d", last_char_occurance(str, cha[0]));
    
    return 0;
}

int last_char_occurance(char* string, char ch)
{
    int i, index = -1;
    for (i = 0; i < strlen(string); i++)
    {
        if (string[i] == ch)
        {
            index = i;
        }
    }
    
    return index;
}

