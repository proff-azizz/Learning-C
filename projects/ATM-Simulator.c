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
int main()
{

    int depo, wd, balance = 0, select;
    while (1)
    {
        printf("WELCOME TO MY MINI ATM SIMULATOR !!!\n");
        printf(" So What do you Want To Do Today ?\n ");
        printf("1. Show Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        if (scanf("%d", &select) != 1)
            ("Enter a Value not Constants / Words");
        else
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
                scanf("%d", &depo);
                if (depo < 0)
                    printf("Enter a positive value\n");
                else
                    printf("%d Rs have been deposited in your account\n", depo);
                balance = balance + depo;

                break;
            }
            case (3):
            {
                printf("How much do you want to withdraw ?\n");
                scanf("%d", &wd);
                if (wd > balance)
                    printf("The amount must'nt exceed your balance !\n");

                else if (wd < 0)
                    printf("Enter a positive value\n");

                else

                    printf("%d Rs has been withdrawn from your account\n", wd);
                balance = balance - wd;
                break;
            }
            case (4):
            {
                printf("Exiting the program... \n Done...\n");
                return 0;
            }
            }
    }
}