#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    char *bannedWords = NULL;
    size_t size = 0;
    int bannedLength = getline(&bannedWords, &size, stdin);
    bannedWords[bannedLength - 1] = '\0';
    
    char *text = NULL;
    int textLength = getline(&text, &size, stdin);
    text[textLength - 1] = '\0';
    
    char *token = strtok(bannedWords, ", ");
    while (token)
    {
        size_t length = strlen(token);
        char *substr = strstr(text, token);
        while (substr)
        {
            int index = substr - text;
            memset(&text[index], '*', length);
            substr = strstr(&(*(substr + 1)), token);
        }
        
        token = strtok(NULL, ", ");
    }
    
    printf("\n%s\n", text);    
    free(bannedWords);
    free(text);
    
    return 0;
}

