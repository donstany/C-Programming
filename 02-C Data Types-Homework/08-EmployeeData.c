#include <stdio.h>

/*
 * A marketing company wants to keep record of its employees. Each record would
 * have the following characteristics:
 * First name
 * Last name
 * Age (0...100)
 * Gender (m or f)
 * Personal ID number (e.g. 8306112507)
 * Unique employee number (27560000...27569999)
 * Declare the variables needed to keep the information for a single employee 
 * using appropriate primitive data types.Use descriptive names. 
 * Print the data at the console.
 */
int main() 
{
    char *firstName = "Amanda";
    char *lastName = "Jonson";
    unsigned char age = 27;
    int gender = 0;
    char *personalIDNumber = "8306112507";
    unsigned long uniqueEmployeeNum = 27563571;
    
    printf("First name: %s\nSecond name: %s\nAge: %d\n", firstName, lastName, age);
    if (gender = 0)
    {
        printf("Gender: %c\n", 'f');
    }
    else
    {
        printf("Gender: %c\n", 'm');
    }
   
    printf("Personal ID: %s\nUnique Employee number: %ld\n", 
            personalIDNumber,
            uniqueEmployeeNum);
    
    return 0;
}

