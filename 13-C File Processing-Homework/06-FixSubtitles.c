#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

#define BUFFER_SIZE 4096

struct time
{
    size_t hours;
    size_t minutes;
    size_t seconds;
    size_t milliseconds;
};

void die(const char *msg);
void process_time(struct time *t, char *token, size_t offset);

int main()
{
    size_t offset;
    if (scanf("%lu", &offset) != 1)
    {
        printf("Invalid input!");
        return 1;
    }
    
    FILE *fileSrc = fopen("source.sub", "r");
    if (!fileSrc)
    {
        die(NULL);
    }
    
    FILE *fileDest = fopen("fixed.sub", "w");
    if (!fileDest)
    {
        die(NULL);
    }
    
    char *line = NULL;
    size_t size = 0;
    while (!feof(fileSrc))
    {
        size_t lineLength = getline(&line, &size, fileSrc);
        char *isTimeLine = strstr(line, " -->");
        if (!isTimeLine)
        {
            fwrite(line, 1, lineLength, fileDest);
        }
        else
        {
            char *token = strtok(line, " --> ");
            char *token1 = strtok(NULL, " --> ");
            struct time t1, t2;
            
            process_time(&t1, token, offset);
            process_time(&t2, token1, offset);
            
            char result[30];
            sprintf(result,
                    "%02lu:%02lu:%02lu,%03lu -->%02lu:%02lu:%02lu,%03lu\n",
                    t1.hours, t1.minutes, t1.seconds, t1.milliseconds,
                    t2.hours, t2.minutes, t2.seconds, t2.milliseconds);
            fwrite(result, 1, strlen(result), fileDest);
        }
    }
    
    printf("Fixed!");
    
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

void process_time(struct time *t, char *token, size_t offset)
{
    int hours = offset  / 10000000;
    int minutes = ((offset / 100000) % 100) % 60;
    int seconds = ((offset / 1000) % 1000) % 60;
    int milliseconds = offset % 1000;
    
    char *current = strtok(token, " :,");
    
    t->hours = atoi(current) + hours;
    t->minutes = atoi(strtok(NULL, " :,")) + minutes;
    t->seconds = atoi(strtok(NULL, " :,")) + seconds;
    t->milliseconds = atoi(strtok(NULL, " :,")) + milliseconds;
    
    t->hours += t->minutes / 60;
    t->minutes %= 60;
    t->minutes += t->seconds / 60;
    t->seconds %= 60;
    t->seconds  += t->milliseconds / 1000;
    t->milliseconds %= 1000;
}