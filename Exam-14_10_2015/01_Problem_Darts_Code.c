#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    // Board coordinates - first line
    double boardX, boardY, boardRadius;
    scanf("%lf %lf %lf", &boardX, &boardY, &boardRadius);

    // Head coordinates
    double headX, headY, headRadius;
    scanf("%lf %lf %lf", &headX, &headY, &headRadius);

    // Arm coordinates
    double armTopLeftX, armTopLeftY, armBottomRightX, armBottomRightY;
    scanf("%lf %lf %lf %lf", &armTopLeftX, &armTopLeftY, &armBottomRightX, &armBottomRightY);

    // count of shoots in int
    int countShoots;
    scanf("%d", &countShoots);

    double pointX, pointY;

    //stats 
    int totalPoints = 0;
    int Health = 100;

    int succesBoardHits = 0; // check for correctness
    int totalShootsMade = 0;

    size_t i;
    for (i = 0; i < countShoots; i++)
    {

        // read shoot coordinates
        scanf("%lf %lf", &pointX, &pointY);

        // is inside Board ?
        int isInsideBoard = ((boardX - pointX) * (boardX - pointX)) +
                ((boardY - pointY) * (boardY - pointY)) <= boardRadius * boardRadius;
        // is inside Arm ?
        int isInsideArm = (pointX >= armTopLeftX && pointX <= armBottomRightX) &&
                (pointY <= armTopLeftY && pointY >= armBottomRightY);

        // is inside Head ?
        int isInsideHead = ((headX - pointX) * (headX - pointX)) +
                ((headY - pointY) * (headY - pointY)) <= headRadius * headRadius;

        if (isInsideBoard && !isInsideHead && !isInsideArm) // only on board
        {
            totalPoints += 50;
            succesBoardHits++;
            totalShootsMade++;
        }
        if (isInsideBoard && isInsideHead) // board and head
        {
            totalPoints += 25;
            succesBoardHits++;
            Health -= 25;
            totalShootsMade++;
            if (Health <= 0)
            {
                break;
            }
        }
        if (isInsideBoard && isInsideArm) // board and arm
        {
            totalPoints += 25;
            succesBoardHits++;
            Health -= 30;
            totalShootsMade++;
            if (Health <= 0)
            {
                break;
            }
        }

        // only head
        if (isInsideHead && !isInsideBoard) // in head and not in board
        {
            Health -= 25;
            totalShootsMade++;
            if (Health <= 0)
            {
                break;
            }
        }

        //only arm
        if (isInsideArm && !isInsideBoard) // in arm and not in board
        {
            Health -= 30;
            totalShootsMade++;
            if (Health <= 0)
            {
                break;
            }
        }

        // miss any target
        if (!isInsideBoard && !isInsideHead&& !isInsideArm)
        {
            totalShootsMade++;
        }
    }

    int boardHitRatio = succesBoardHits * 100 / totalShootsMade;

    //Points: 75
    //Hit ratio: 50%
    //Bay Mile: 45

    printf("Points: %d\n", totalPoints);
    printf("Hit ratio: %d%%\n", boardHitRatio);
    printf("Bay Mile: %d\n", Health <= 0 ? 0 : Health);

    return (EXIT_SUCCESS);
}
