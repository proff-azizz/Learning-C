#include <stdio.h>
void triangular()
{
    printf("*\n");
    printf("**\n");
    printf("***\n");
    printf("****\n");
}
void rev_triangular()
{
    printf("****\n");
    printf("***\n");
    printf("**\n");
    printf("*\n");
}
int main()
{
    int choice;
    printf("Enter 1 to print triangular star pattern\nEnter 2 to print Reversed triangular pattern");
    if (scanf("%d", &choice) == 1)
    {
        switch (choice)
        {
        case 1:
        {
            triangular();
            break;
        }
        case 2:
        {
            rev_triangular();
            break;
        }
        }
    }
    else
    {
        printf("Enter a valid input");
    }
    return 0;
}