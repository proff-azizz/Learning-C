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

     printf("You chose : %d\n", person);
    printf("Computer Chose : %d\n", computer);
    if (person == computer)
    {
        printf("It's a Draw !\n");
    }
    else if
        (person == 1 && computer == 2 ||person ==2 && computer == 3 )
        
            printf("Computer Won !\n");
        else if (computer == 1 && person ==2 || computer == 2 && person == 3)
        {
            printf("Congratulations !!! You won !\n");
        }
        else 
        {
            printf("you chose incorrect option ! TRY AGAIN !!!\n");
            return 0;
        }

   
    
    return 0;
}