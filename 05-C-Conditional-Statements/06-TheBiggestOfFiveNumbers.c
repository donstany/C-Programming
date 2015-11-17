#include <stdio.h>

/*
 * Write a program that finds the biggest of five numbers by using only 
 * five if statements
 */
int main() 
{
    double firstNum, secondNum, thirdNum, forthNum, fifthNum;
    if (scanf("%lf %lf %lf %lf %lf", 
                &firstNum, &secondNum, &thirdNum, &forthNum, &fifthNum) != 5)
    {
        printf("Invalid input!");
    }
    else
    {
        if (firstNum > secondNum &&
                firstNum > thirdNum &&
                firstNum > forthNum &&
                firstNum > fifthNum)
        {
            printf("%lf", firstNum);
        }
        else if (firstNum < secondNum &&
                secondNum > thirdNum &&
                secondNum > forthNum &&
                secondNum > fifthNum)
        {
            printf("%lf", secondNum);
        }
        else if (firstNum < thirdNum &&
                secondNum < thirdNum &&
                thirdNum > forthNum &&
                thirdNum > fifthNum)
        {
            printf("%lf", thirdNum);
        }
        else if (firstNum < forthNum &&
                secondNum < forthNum &&
                thirdNum < forthNum &&
                forthNum > fifthNum)
        {
            printf("%lf", forthNum);
        }
        else
        {
            printf("%lf", fifthNum);
        }
    }
    
    return 0;
}

