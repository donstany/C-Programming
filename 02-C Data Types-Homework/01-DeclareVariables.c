#include <stdio.h>
/*
 * Declare five variables choosing for each of them the most appropriate of the 
 * types char, short, unsigned short, int, unsigned int, long, unsigned long to 
 * represent the following values:
 *  52130, 8942492113, -115, 4825932, 97, -10000, -35982859328592389.
 *  Choose a large enough type for each number to ensure it will fit in it.
 */

int main()
{
    unsigned short firstNum = 52130;
    long secondNum = 8942492113;
    short thirdNum = -115;
    unsigned int forthNum = 4825932;
    unsigned char fifthNum = 97;
    short sixthNum = -10000;
    unsigned long seventhNum = -35982859328592389;
    
    printf("%d, %ld, %d, %d, %d, %d, %ld",
            firstNum,
            secondNum, 
            thirdNum,
            forthNum,
            fifthNum, 
            sixthNum,
            seventhNum);
    return 0;
}

