#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 10
/*
 * A beer time is after 1:00 PM and before 3:00 AM. Write a program that 
 * enters a time in format “hh:mm tt” (an hour in range [01...12], a minute 
 * in range [00...59] and AM / PM designator) and prints “beer time” or 
 * “non-beer time” according to the definition above or “invalid time” 
 * if the time cannot be parsed. Note that you may need to learn how to parse
 * dates and times.
 */
int main() 
{
    char input[BUFFER_SIZE], amPm;
    fgets(input, BUFFER_SIZE, stdin);
    int hour, minutes, i = 0;
    char* endPtr;
    
    if (input[1] == ':')
    {
        hour = strtol(input, &endPtr, 10);
        if (endPtr[0] != ':')
        {
            printf("Invalid input!");
        }
        
        char mins[2];
        mins[0] = input[2];
        mins[1] = input[3];
        minutes = strtol(mins, &endPtr, 10);
        amPm = input[5];
    }
    else if (input[2] == ':')
    {
        hour = strtol(input, &endPtr, 10);
        if (endPtr[0] != ':')
        {
            printf("Invalid input!");
        } 
        
        char mins[2];
        mins[0] = input[3];
        mins[1] = input[4];
        minutes = strtol(mins, &endPtr, 10);
        amPm = input[6];
    }
    
    if ((amPm == 'A' && hour < 3) || (amPm == 'P' && hour >= 1 && minutes == 0))
    {
        printf("beer time");
    }
    else
    {
        printf("non beer time");
    }
    
    return 0;
}

