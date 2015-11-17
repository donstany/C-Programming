#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * Write a function that returns the last digit of a given integer 
 * as an English word. Test the function with different input values. 
 * Ensure you name the function properly. Declare a function prototype 
 * before defining the function.
 */

char* last_digit_as_word(long number);

int main() 
{
    long num;
    if (scanf("%ld", &num) != 1)
    {
        printf("Invalid input!");
        return 1;
    }

    printf("%s", last_digit_as_word(num));
    
    return 0;
}

char* last_digit_as_word(long number)
{
    char digitsAsWord[10][10] = {"zero", "one", "two", "three", 
                            "four", "five", "six", 
                            "seven", "eight", "nine"};
    
    int lastDigit = number % 10;
    char* lastDigitAsWord = malloc(6);
    strcpy(lastDigitAsWord, digitsAsWord[lastDigit]);
   
    return lastDigitAsWord;
}
