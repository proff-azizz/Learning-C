// Function without arguments but with return value

#include <stdio.h>
 int num(int number)
 {
    return number * 10;

 }
int main()
{
    int nr;
    printf("Enter a number you want to multiply by 10 :");
    scanf("%d", &nr);
    printf("The number %d multiply by 10 is %d", nr,num(nr));
    return 0;
}