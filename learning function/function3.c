// Function without arguments but with return value

#include <stdio.h>
 int num(int number)
 {
    return number * 10;

 }
int main()
{
    int nbr;
    printf("Enter a number you want to multiply by 10 :");
    scanf("%d", &nbr);
    printf("The number %d multiply by 10 is %d", nbr,num(nbr));
    return 0;
}