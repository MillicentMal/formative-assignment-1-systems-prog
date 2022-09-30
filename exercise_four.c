#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{

    srand(time(NULL)); /*generating random number */
    int target = rand() % 20;
    int guess, counter = 0, chances = 0;
    printf("Guess the number\n");
    do { /* do while loop to at least take in input once before checking conditions*/
        counter++;
        chances++;
        scanf("%d", &guess);

        if (guess < target) { /* checking if guess is less than target*/
            printf("\nYour number was less than the target. You have %d chances left.\n", 10 - chances);
            continue;
        }
        else if (guess > target){ /* if guess is greater than target*/
            printf("\nYour number was greater than the target. You have %d chances left.\n", 10 - chances);
            continue;

        }
        else {
            printf("\nWell done. The number is %d. You got it after %d guesses\n", target, chances);
            break;

        }

    }while(counter < 10);
    return 0;
}