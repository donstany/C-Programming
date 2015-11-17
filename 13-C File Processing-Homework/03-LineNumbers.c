#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#define BUFFER_SIZE 4096

void die(const char *msg);

int main()
{
    FILE *fileSrc = fopen("03-LineNumbers.c", "r");
    if (!fileSrc)
    {
        die(NULL);
    }
    
    FILE *fileDest = fopen("result.txt", "w");
    if (!fileDest)
    {
        die(NULL);
    }
    
    char *line = NULL;
    size_t size = 0, lineNum = 1;
    
    while (!feof(fileSrc))
    {
        size_t lineLength = getline(&line, &size, fileSrc);
        char lineNumber[4];
        int num = sprintf(lineNumber, "%-4lu ", lineNum);
        fwrite(lineNumber, 1, num, fileDest);
        fwrite(line, 1, lineLength, fileDest);
        
        lineNum++;
    }
    
    free(line);
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