#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#define BUFFER_SIZE 4096

void die(const char *msg);

int main()
{
    FILE *fileSrc = fopen("The_Rope.jpg", "r");
    if (!fileSrc)
    {
        die(NULL);
    }
    
    FILE *fileDest = fopen("copy.jpg", "w");
    if (!fileDest)
    {
        die(NULL);
    }
    
    char buffer[BUFFER_SIZE];
    while (!feof(fileSrc))
    {
        size_t readBytes = fread(buffer, 1, BUFFER_SIZE, fileSrc);
        fwrite(buffer, 1, readBytes, fileDest);
    }
    
    fclose(fileSrc);
    fclose(fileDest);
    
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