#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    while (1)

    {
        srand(time(NULL));
        int num;
        int guess = rand() <=100 ;
        printf("== Guess The Number ==\n");
        printf("What's Your Guess ?\n");
        scanf("%d", &num);
        if (num > guess )
        {
            printf("Too High\n");
        }
        else if (num < guess)
        {
            printf("Too Low Try AGAIN\n");
        }
        else
        {
            printf("Congratulations !!!\nCorrect Guess !\n");
        }
        
    }
    return 0;
}
