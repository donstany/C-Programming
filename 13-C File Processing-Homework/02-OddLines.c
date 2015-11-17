#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#define BUFFER_SIZE 4096

void die(const char *msg);

int main()
{
    FILE *file = fopen("02-OddLines.c", "r");
    if (!file)
    {
        die(NULL);
    }
    
    char *line = NULL;
    size_t size = 0;
    int isOdd = 1;
    while (!feof(file))
    {
        size_t lineLength = getline(&line, &size, file);
        if (isOdd)
        {
            printf("%s", line);
        }
        
        isOdd = !isOdd;
    }

    free(line);
    fclose(file);
    
    return 0;
}

void die(const char *msg)
{
    if (errno)
    {
        perror(msg);
    }
    else
    {
        printf("ERROR: %s\n", msg);
    }
    
    exit(1);
}