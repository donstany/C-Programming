#include <stdio.h>
#include <time.h>

/*
 * Write a program that reads your birthday from the console as text
 * and prints how old you are now and how old you will be after 10 years.
 */
int main()
{
    int birthYear, birthMonth, birthDay;
    time_t dateTimeNow = time(NULL);
    struct tm * DTimeNow = localtime(&dateTimeNow);
    char input[20];
    int currentYear = DTimeNow->tm_year + 1900;
    int currentMonth = DTimeNow->tm_mon + 1;
    int currentDate = DTimeNow->tm_mday;   
    
    if (scanf("%d.%d.%d", &birthDay, &birthMonth, &birthYear) == 1)
    {
        printf("Invalid input");
    }
        
    int age = currentYear - birthYear;
    
    if (birthMonth < currentMonth)
    {       
        printf("Now: %d\nAfter 10 years: %d\n", age, age + 10);
    }    
    else if (birthMonth == currentMonth)
    {
        if (birthDay > currentDate)
        {
            printf("Now: %d\nAfter 10 years: %d\n", age - 1, age + 9);
        }
        else
        {
            printf("Now: %d\nAfter 10 years: %d\n", age, age + 10);
        }
    }    
    else if (birthMonth > currentMonth)
    {
        printf("Now: %d\nAfter 10 years: %d\n", age - 1, age + 9);
    }
    
    return 0;
}

