#include <stdio.h>
int main()
{
    int a,b;
    printf("=== 67 Checker ===\n");
    printf("Enter a number that you want to check\n");
    scanf("%d",&a);
    if((a % 67)==0)
    printf("The number is divisible by 67\n");
    else
    printf("Not divisible by 67\n");
    return 0;
}