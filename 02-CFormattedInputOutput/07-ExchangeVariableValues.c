#include <stdio.h>
#include <stdlib.h>

/*
 * Declare two integer variables a and b and assign them with 5 and 10 and after that exchange their values by using
some programming logic. Print the variable values before and after the exchange.
Expected Output
Before:
a = 5
b = 10
After:
a = 10
b = 5
 */
int main(int argc, char** argv) {

    int a = 5;
    int b = 10;
    printf("Before:\na = %d\nb = %d", a, b);

    int c = b;
    b=a;
    a=c;

    return (EXIT_SUCCESS);
}

