#include <stdio.h>

/*
 * Declare a string variable and assign to it the following value:
 * The "use" of quotations causes difficulties. \n, \t and \ are also special
 * characters.
 */

int main() 
{
    char someText[] = "The \"use\" of quotations causes difficulties. \\n, \\t and \\ are also special characters.";
    
    printf("%s", someText);
    
    return 0;
}

