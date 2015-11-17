#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

#define BUFFER_SIZE 4096

void die(const char *msg);
void slice(const char *sourceFile, const char *destinationFile, size_t parts);
void assemble(char **parts, const char *destinationDirectory);

int main(int argc, char **argv)
{
    int parts = atoi(argv[3]);
    
    const char *srcPath = argv[1];
    const char *destPath = argv[2];
    slice(srcPath, destPath, parts);
    
    char **partsArr = calloc(parts, sizeof(char *));
    if (!partsArr)
    {
        printf("No memory to allocate");
        return 1;
    }
    
    int i;
    for (i = 0; i < parts; i++)
    {
        size_t destLen = strlen(destPath);
        partsArr[i] = calloc(11 + destLen, sizeof(char));
        if (!partsArr[i])
        {
            printf("No memory to allocate");
            return 1;
        }
        
        sprintf(partsArr[i], "%sPart-%d.jpg", destPath, i);
    }
    
    assemble(partsArr, destPath);
    
    for (i = 0; i < parts; i++)
    {
        free(partsArr[i]);
    }
    
    free(partsArr);
    
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

void slice(const char *sourceFile, const char *destinationFile, size_t parts)
{
    FILE *fileSrc = fopen(sourceFile, "r");
    if (!fileSrc)
    {
        die(NULL);
    }
    
    fseek(fileSrc, 0, SEEK_END);
    unsigned long long size = ftell(fileSrc);
    fseek(fileSrc, 0, SEEK_SET);
    unsigned long long partSize = size / parts;
    char buffer[BUFFER_SIZE];
    int i;
    for (i = 0; i < parts; i++)
    {
        char name[30];
        sprintf(name, "%sPart-%d.jpg", destinationFile, i);
        FILE *currentFile = fopen(name, "w");
        if(!currentFile)
        {
            die(NULL);
        }
        
        size_t writtenBytes = 0;
        while (!feof(fileSrc) && writtenBytes <= partSize)
        {
            size_t readBytes = fread(buffer, 1, BUFFER_SIZE, fileSrc);
            fwrite(buffer, 1, readBytes, currentFile);
            writtenBytes += readBytes;
        }
        
        fclose(currentFile);
    }
    
    fclose(fileSrc);
}

void assemble(char **parts, const char *destinationDirectory)
{
    char name[30];
    sprintf(name, "%sassembled.jpg", destinationDirectory);
    FILE *result = fopen(name, "w");
    if (!result)
    {
        die(NULL);
    }
    
    char *buffer[BUFFER_SIZE];
    int i;
    for (i = 0; i < 3; i++)
    {
        FILE *currentPart = fopen(parts[i], "r");
        if (!currentPart)
        {
            die(NULL);
        }
        
        while (!feof(currentPart))
        {
            size_t readBytes = fread(buffer, 1, BUFFER_SIZE, currentPart);
            fwrite(buffer, 1, readBytes, result);
        }
        
        fclose(currentPart);
    }
    
    fclose(result);
}