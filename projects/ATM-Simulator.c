// 3. ATM Simulator
// Easy–medium
// What to build
// Show balance.
// Deposit money.
// Withdraw money.
// Exit through a menu.
// Skills: Functions, conditions, loops and numeric calculations.
// Challenge: Reject negative amounts and withdrawals exceeding the balance.
#include <stdio.h>
int main(void)
{

    int depo, wd, balance = 0, select;
    while (1)
    {
        printf("WELCOME TO MY MINI ATM SIMULATOR !!!\n");
        printf("So What do you Want To Do Today ?\n");
        printf("1. Show Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        if (scanf("%d", &select) != 1)
           { printf("Invalid input, Enter a number \n");
            while (getchar()!= '\n')
            {

            }
            continue;
           }
            switch (select)
            {
            case (1):
            {
                printf("You have currently %d RS in Your Account\n ", balance);
                break;
            }
            case (2):
            {
                printf("Enter The amount you want to deposit : ");
                if (scanf("%d", &depo) != 1)
           { printf("Invalid input, Enter a number \n");
            while (getchar()!= '\n')
            {

            }
            continue;
           }
                else if (depo <= 0)
                    printf("Enter a positive value / not zero\n");

                else{
                    balance = balance + depo;
                printf("%d Rs have been deposited in your account\n", depo);
                }
                break;
            }
            case (3):
            {
                printf("How much do you want to withdraw ?\n");
                if (scanf("%d", &wd) != 1)
           { printf("Invalid input, Enter a number \n");
            while (getchar()!= '\n')
            {

            }
            continue;
           }
                else if (wd > balance)
                    printf("The amount must'nt exceed your balance !\n");

                else if (wd <= 0)
                    printf("Enter a positive value / not zero\n");

                else{
                    balance = balance - wd;
                printf("%d Rs has been withdrawn from your account\n", wd);
                }
                break;
                
            }
            case (4):
            {
                printf("Exiting the program... \n Done...\n");
                return 0;
            }
            default:
                printf("You entered invalid option \n");
                break;
            }
    }
}