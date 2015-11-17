#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#define BUFFER_SIZE 4096

void die(const char *msg);

int main()
{
    FILE *file = fopen("01-PrintFileContents.c", "r");
    if (!file)
    {
        die(NULL);
    }
    
    char buffer[BUFFER_SIZE];
    while (!feof(file))
    {
        size_t readBytes = fread(buffer, 1, BUFFER_SIZE, file);
        printf("%s", buffer);
    }
    
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