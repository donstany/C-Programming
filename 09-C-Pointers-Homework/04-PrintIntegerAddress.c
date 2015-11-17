#include <stdio.h>
#include <stdlib.h>

/*
 * Write a function which takes as input an integer and prints 
 * the address of it in the memory. Try printing the address of the integer 
 * in the function and in the main function. What is the difference and why?
 */

void print_adrres(int number);

int main() 
{
    int num = 5;
    printf("%p\n", &num);
    print_adrres(num);
    
    // The difference of the adresses is beacause when, printing is called 
    // from the function, it's copy of the number, not a pointer to it.
    
    return 0;
}

void print_adrres(int number)
{
    printf("%p\n", &number);
}