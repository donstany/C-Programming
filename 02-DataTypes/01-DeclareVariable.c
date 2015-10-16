#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

/*Declare five variables choosing for each of them the most appropriate of the types char, short, unsigned
short, int, unsigned int, long, unsigned long to represent the following values: 52130, 8942492113, -
115, 4825932, 97, -10000, -35982859328592389. Choose a large enough type for each number to ensure it will
fit in it.
 */

int main() {

    unsigned short a = 52130;
    int64_t b = 8942492113; // int16_t, int32_t, int64_t
    int x = sizeof (long);
    // printf("x size of int64_t =%d\n", x);
    //  int32_t a = 52130; we sure in is 32 bit 
    char c = -115;
    int d = 4825932;
    char f = 97;
    short e = -10000;
    long long g = -35982859328592389;
    printf("a=%d\n", a);
    printf("b=%Ld\n", b);
    printf("c=%d\n", c);
    printf("d=%d\n", d);
    printf("f=%d\n", f);
    printf("e=%d\n", e);
    printf("g=%lld\n", g);

    return (EXIT_SUCCESS);
}

