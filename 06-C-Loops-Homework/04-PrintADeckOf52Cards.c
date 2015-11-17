#include <stdio.h>

/*
 * Write a program that generates and prints all possible cards from 
 * a standard deck of 52 cards (without the jokers). The cards should be 
 * printed using the classical notation (like 5S (♠), AH (♥), 9C (♣) 
 * and KD (♦)). The card faces should start from 2 to A. 
 * Print each card face in its four possible suits: clubs, diamonds, hearts 
 * and spades. Use 2 nested for-loops and a switch-case statement.
 */
int main() 
{
    char suits[] = {'S', 'H', 'D', 'C'};
    char cards[] = {'J', 'Q', 'K', 'A'};
    int i, j;
    for (i = 2; i <= 14; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (i <= 10)
            {
                printf("%d%c ", i, suits[j]);
            }
            else
            {
                switch (i)
                {
                    case 11:
                        printf("%c%c ", cards[0], suits[j]);
                    break;
                    case 12:
                        printf("%c%c ", cards[1], suits[j]);
                    break;
                    case 13:
                        printf("%c%c ", cards[2], suits[j]);
                    break;
                    case 14:
                        printf("%c%c ", cards[3], suits[j]);
                    break;
                }
            }
        }
        
        printf("\n");
    }
    
    return 0;
}

