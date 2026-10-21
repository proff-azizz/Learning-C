#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    int guess, attempt = 0,hint;
    srand(time(NULL));
    int generated = rand() % 100 + 1;
    int lower = (generated/10)*10;
    int upper = lower +10;
    do
    {
        printf("====== NUMBER GUESSING GAME ======\n");
        printf("Enter Your Guess Number between 1 to 100 : ");
        if (scanf("%d", &guess) != 1)
        {
            printf("Enter a valid input !\n");
            while (getchar() != '\n')
            {
            }

            continue;
        }
        printf("Enter 000 For hint\n");
        if(guess==000)
        {
        printf("The number is between %d and %d\n",lower,upper);
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
