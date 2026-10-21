#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    int guess, attempt = 0;
    srand(time(NULL));
    int generated = rand() % 100 + 1;
    do
    {

        printf("Enter Your Guess Number : ");
        if (scanf("%d", &guess) != 1)
        {
            printf("Enter a valid input !\n");
            while (getchar() != '\n')
            {
                
            }

                continue;
        }

        if (guess < generated)
        {
            printf("Too Low Guess another\n");
        }
        else if (guess > generated)
        {
            printf("Too High Guess a bit lower\n");
        }
        attempt++;

    } while (guess != generated);
    {
        printf("Congratulations !!! You Guess the correct Number.\n");
        printf("You guessed the correct number in %d attempts\n", attempt);
    }
    return 0;
}
