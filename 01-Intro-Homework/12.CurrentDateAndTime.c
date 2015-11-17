#include <stdio.h>
#include <time.h>

/*
 * Create a console application that prints the current date and time.
 */
int main() {
    time_t dateTimeNow = time(NULL);
    struct tm * DTimeNow = localtime(&dateTimeNow);
    char text[100];
    
    if(dateTimeNow != -1)
    {
        strftime(text, sizeof(text) - 1, "%d %B %Y %H:%M:%S", DTimeNow);
        printf("%s", text);
    }
    
    return 0;
}

