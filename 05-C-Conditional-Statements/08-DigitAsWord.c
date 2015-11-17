#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 30

/*
 * Write a program that asks for a digit (0-9), and depending on the input, 
 * shows the digit as a word (in English). Print “not a digit” in case of 
 * invalid inut. Use a switch statement.
 */
int main()
{
    char input[BUFFER_SIZE];
    fgets(input, BUFFER_SIZE, stdin);
    char* endPtr;
    int inputAsNumber = strtol(input, &endPtr, 10);
    if (endPtr[0] != '\n')
    {
        printf("not a digit");
    }
    else
    {
        switch (inputAsNumber)
        {
            case 0:
                printf("zero");
            break;
            case 1:
                printf("one");
            break;
            case 2:
                printf("two");
            break;
            case 3:
                printf("three");
            break;
            case 4:
                printf("four");
            break;
            case 5:
                printf("five");
            break;
            case 6:
                printf("six");
            break;
            case 7:
                printf("seven");
            break;
            case 8:
                printf("eight");
            break;
            case 9:
                printf("nine");
            break;
            default:
                printf("not a digit");
                break;
        }
    }
 
    return 0;
}

