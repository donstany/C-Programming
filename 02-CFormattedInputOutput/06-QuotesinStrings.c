#include <stdio.h>
#include <stdlib.h>

/*
 * Declare a string variable and assign to it the following value:
The "use" of quotations causes difficulties. \n, \t and \ are also special characters.
Print the resulting string on the console.
 * Expected Output
The "use" of quotations causes difficulties. \n, \t and \ are also special characters.
 */
int main(int argc, char** argv) {
    
    char *input = "The ""use"" of quotations causes difficulties. \\n, \\t and \\ are also special characters.";
    printf("%s\n", input);
    
    return (EXIT_SUCCESS);
}

