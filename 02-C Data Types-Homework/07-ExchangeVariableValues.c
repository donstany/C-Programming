#include <stdio.h>

/*
 * Declare two integer variables a and b and assign them with 5 and 10 and 
 * after that exchange their values by using some programming logic. 
 * Print the variable values before and after the exchange.
 */
int main() 
{
    int a = 5;
    int b = 10;
    int c;
    
    printf("Before:\na = %d\nb = %d\n", a, b);    
    c = b;
    b = a;
    a = c;
    printf("After:\na = %d\nb = %d\n", a, b);
    
    return 0;
}

