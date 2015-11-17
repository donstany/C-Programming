#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 30
/*
 * Write a program that, depending on the user’s choice, inputs an int, 
 * double or string variable. If the variable is int or double, the program 
 * increases it by one. If the variable is a string, the program appends "*" 
 * at the end. Print the result at the console. Use switch statement.
 */
int main() 
{
    printf("Please choose a type:\n1 --> int\n2 --> double\n3 --> string\n");
    int choice;
    if (scanf("%d", &choice) != 1)
    {
        printf("Invalid input!");
    }
    else
    {
        switch (choice)
        {
            case 1:
            {
                printf("Please enter an int: ");
                int intNumber;
                if (scanf("%d", &intNumber) != 1)
                {
                    printf("Invalid number!");
                }
                else
                {
                    printf("%d", intNumber + 1);
                }
            }
            break;
            case 2:
            {
                printf("Please enter a double: ");
                double doubleNumber;
                if (scanf("%lf", &doubleNumber) != 1)
                {
                    printf("Invalid number!");
                }
                else
                {
                    printf("%lf", doubleNumber + 1);
                }
            }
            break;
            case 3:
            {
                char input[BUFFER_SIZE];
                printf("Please enter a string: ");
                fgets(input, BUFFER_SIZE, stdin);
                if (input[0] == '\n')
                {
                    fgets(input, BUFFER_SIZE, stdin);
                    size_t inputLength = strlen(input) - 1;
                    if (input[inputLength] == '\n')
                    {
                        input[inputLength] = '\0';
                    }
                }
                
                printf("%s*", input);
            }
            break;
            default:
                printf("Invalid input!");
            break;
        }
    }
    
    return 0;
}
