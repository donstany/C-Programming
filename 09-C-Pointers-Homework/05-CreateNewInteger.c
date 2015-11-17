#include <stdio.h>
#include <stdlib.h>

/*
 * Write a function that declares and initializes and integer on the stack, 
 * then returning it. Try creating the function with two different declarations:
 */

int new_integer();
int* new_integer_ptr();

int main() 
{
    printf("%d\n", new_integer());
    int *number = new_integer_ptr();
    printf("%d\n", *number);
    free(number);
    //The difference between the two functions is, that first function
    //initialize the int on the stack, and the second on the heap. If you
    //don't use "malloc" function, it doesn't work correctly. So if you
    //use the stack for second function it will be wrong, because that memory
    //can be used from another function/process, because it will be poped out
    //from the stack after "return".
    
    return 0;
}

int new_integer()
{
    int newInt = 5;
    
    return newInt;
}

int* new_integer_ptr()
{
    int *newInt = malloc(sizeof(int));
    *newInt = 5;
    
    return newInt;
}