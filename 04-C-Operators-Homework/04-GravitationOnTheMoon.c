#include <stdio.h>

/*
 * The gravitational field of the Moon is approximately 17% of 
 * that on the Earth. Write a program that calculates the weight 
 * of a man on the moon by a given weight on the Earth.
 */
int main() 
{
    const double PERCENT_WEIGHT = 17.0 / 100;
    double weightOnEarth, weightOnMoon;
    if (scanf("%lf", &weightOnEarth) != 1)
    {
        printf("Invalid input!");
    }
    else
    {
        weightOnMoon = weightOnEarth * PERCENT_WEIGHT;
        printf("%lf", weightOnMoon);
    }
    
    return 0;
}

