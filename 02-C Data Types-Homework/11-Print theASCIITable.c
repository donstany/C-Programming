#include <stdio.h>

/*
 * Find online more information about ASCII (American Standard Code for 
 * Information Interchange) and write a program to prints the entire ASCII
 * table of characters at the console (characters from 0 to 255). Note that
 * some characters have a special purpose and will not be displayed 
 * as expected. You may skip them or display them differently.
 */
int main() 
{
    char asciiTable[128];
    int i;
    for (i = 0; i < 128; i++)
    {
        asciiTable[i] = i;
        if (i > 31)
        {
            printf("%c", asciiTable[i]);
        }
        else
        {
            //special characters that can't be displayed
            printf("@"); 
        }
        
        if (i < 127)
        {
            printf(", ");
        }
    }
    
    return 0;
}

