// https://www.asciitable.com/
#include <stdio.h>
int main()
{
    char character;
    printf("Enter the character you want to check : ");
    scanf(" %c",&character);
    if(character>=97 && character<=122)
    {
        printf("The character is lowercase \n");
    }
    else
    {
        printf("The character is not lowercase\n");
    }
    return 0;
}