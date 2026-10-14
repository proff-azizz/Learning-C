#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int computer = rand() % 3 + 1;
    int person;
    printf("== Select an option ==\n");
    printf("1. Rock\n");
    printf("2. Paper\n");
    printf("3. Scissors\n");
    scanf("%d", &person);
    if (person == computer)
    {
        printf("It's a Draw !\n");
    }
    else if
        (person == 1 && computer == 2 || )
        
            printf("Computer Won !");
        else {
            printf("You won !");
        }

    printf("You chose %d\n ", person);
    printf("Computer Chose %d\n", computer);
    return 0;
}