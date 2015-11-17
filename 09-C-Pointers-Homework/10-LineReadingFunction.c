#include <stdio.h>
#include <stdlib.h>

/*
 * Write a function that reads an entire line from the standard input 
 * stream (console) and returns a pointer to the read string. The function 
 * should be able to read lines of unknown size. 
 * Hint: Initially allocate a small buffer (use malloc()) and increase its 
 * size when it gets full (use realloc()).
 * Forbidden: Do not use hacks such as declaring very large buffers.
 */

char *read_line();

int main() 
{
    char *line;
    line = read_line(&line);
    printf("%s", line);
    
    free(line);
    
    return 0;
}

char *read_line()
{
    int initialSize = 4;
    char *readline = malloc(initialSize);
    int index = 0;
    char ch = getchar();
    while (ch != '\n')
    {
        if (index == initialSize - 1)
        {
            char *newReadLine = realloc(readline, initialSize * 2);
            if (!newReadLine)
            {
                printf("Not enough memory!");
                exit(1);
            }
            
            readline = newReadLine;
            initialSize *= 2;
        }
        
        *(readline + index) = ch;
        index++;
        ch = getchar();
    }
    
    *(readline + index) = '\0';
    
    return readline;
}