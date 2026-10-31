#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define rock 1
#define paper 2
#define scissors 3
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
    if (person < 1 || person > 3)
    {
        printf(" Invalid Input !!\n Choose a number between 1 to 3 \n");
        return 1;
    }

    else if (person == computer)
    {
        printf("It's a Draw !\n");
    }
    else if (person == 1 && computer == 2 || person == 2 && computer == 3 || person == 3 && computer == 1)

        printf("Computer Won !\n");
    else if (computer == 1 && person == 2 || computer == 2 && person == 3 || computer == 3 && person == 1)
    {
        printf("Congratulations !!! You won !\n");
    }
    else
    {
        printf("you chose incorrect option ! TRY AGAIN !!!\n");
        return 0;
    }
    if(person == 1)
    {
        printf("You chose Rock\n");
    }
    else if(person == 2)
    {
        printf("You chose Paper\n");
    }
    else if(person == 3)
    {
        printf("You chose Scissors\n");
    }
    if(computer == 1)
    {
        printf("Computer Chose Rock\n");
    }
    else if(computer == 2)
    {
        printf("Computer Chose Paper\n");
    }
    else if (computer == 3)
    {
        printf("Computer Chose Scissors\n");
    }

    return 0;
}