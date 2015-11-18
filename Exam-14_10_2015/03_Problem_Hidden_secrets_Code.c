#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <bool.h>
#define BUFFER_SIZE 64
#define FILE_NAME_SIZE 64

void create_file_name(char buffer[], size_t maxSize, const char *fileName, const char *srcFileName);

void kill(const char *msg);

void file_kill(const char *msg, FILE *stream, const char *fileName);

int main(int argc, char **argv) 
{
	// check is there necessery argument passed from the console 
    if (argc < 2)
        kill("Usage: ./prog [<file-1> <file-2> ...]\n");
    size_t fileCount = argc - 1;
    char **files = argv + 1;
    
    char resultFileName[FILE_NAME_SIZE];
    create_file_name(resultFileName, FILE_NAME_SIZE, "merged", files[0]);
    
    FILE *resultFile = fopen(resultFileName, "wb");
	
    if (!resultFile)
        kill(NULL);
    
    char buffer[BUFFER_SIZE];
	
    // declare and initialize special array of symbol
    char apple[4] = { 0x33, 0x34, 0x35, 0x36 };
    char leaf[4] = { 0x21, 0x22, 0x23, 0x24 };

    
	size_t i;
    for (i = 0; i < fileCount; i++)
    {
        FILE *currentPart = fopen(files[i], "rb");
        if (!currentPart)
            file_kill(files[i], resultFile, resultFileName);
        
        while (TRUE)
        {
            size_t readBytes = fread(buffer, 1, BUFFER_SIZE, currentPart);
            // condition 1 for break while loop -> when there is no Byte to read from currentPart/source
			if (readBytes == 0)
                break;
            
			// pointer arithmetic to last char in buffer 63 Bytes
            char *currentSign = buffer + readBytes - 1;
            size_t writtenBytes;
			
			// check last Byte is a apple ?
            if (memcmp(currentSign, apple, 1) == 0)
            {
                writtenBytes = fwrite(buffer, 1, readBytes - 4, resultFile);
            }
			
			// check last Byte is a leaf ?
            else if (memcmp(currentSign, leaf, 1) == 0)
            {
                size_t firstHalf = (readBytes - 4) / 2;
                writtenBytes = fwrite(buffer, 1, firstHalf, resultFile);
            }
			
			// check for cross symbol
            else 
            {
				// doesn't write on resultFile 
                continue;
            }
            // condition 2 for break while loop -> till there is no Bytes to write in resulFile/ destination
            if (writtenBytes == 0)
                break;
        }
        // if happen error when reading current part of file
        if (ferror(currentPart))
        {
            fclose(currentPart);
            file_kill("Error reading from part\n", resultFile, resultFileName);
        }
        // if happen error when when writting in a file -> resultFile
        if (ferror(resultFile))
        {
            fclose(currentPart);
            file_kill("Error writing to result\n", resultFile, resultFileName);
        }
        
        fclose(currentPart);
    }
    
    fclose(resultFile);
    
    printf("Eureka!\n");
    
    return (EXIT_SUCCESS);
}

void create_file_name(char buffer[], size_t maxSize, const char *fileName, const char *srcFileName)
{
    char *extension = strrchr(srcFileName, '.');
    snprintf(buffer, maxSize, "%s%s", fileName, extension);
}

void kill(const char *msg)
{
    if (errno)
        perror(msg);
    else 
        fprintf(stderr, "%s\n", msg);
    
    exit(1);
}

void file_kill(const char *msg, FILE *stream, const char *fileName)
{
    fclose(stream);
    remove(fileName);
    kill(msg);
}