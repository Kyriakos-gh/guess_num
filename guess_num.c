/*
    guess_num.c : Guess number game!
    Based on source code by http://www.cprogrammingnotes.com/question/guess-my-number.html
    Kyriakos, 13/2/2023
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define UPPER_LIMIT 12

int main()
{
    int num, guess;
    unsigned short int tries = 0;

    srand(time(0));                     /* Seed random number generator */
    num = rand() % UPPER_LIMIT + 1;     /* Random number between 1 and UPPER_LIMIT */
    printf("Welcome to the guess number game!\n");
    do
    {
        printf("Please enter a guess between 1 and %d:\n", UPPER_LIMIT);
        scanf("%d", &guess);
        tries++;
        if (guess > num)
        {
            printf("Too high!\n");
        }
        else if (guess < num)
        {
            printf("Too low!\n");
        }
        else
        {
            printf("Congratulations! You found the number! It was %d!\nYou got it in %d guesses!\n", num, tries);
        }
    }while (guess != num);
    return 0;
}
