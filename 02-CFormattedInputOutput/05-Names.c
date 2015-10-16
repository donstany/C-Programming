#include <stdio.h>
#include <stdlib.h>

/*
 * Declare two string (char array) variables holding your first name and last name. Print them in the console (mind
 adding an interval between them).
 */
int main(int argc, char** argv) {
    
    char firstName[] = "Stanislav";
    char lastName[]= "Stanev";
    printf("%s %s", firstName, lastName);

    return (EXIT_SUCCESS);
}

