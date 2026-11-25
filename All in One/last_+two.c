#include <stdio.h>
int main()
{
    int enter,last;
    printf("ENter the year ");
    scanf("%d",&enter);
    last = enter % 100;
    printf("The last 2 number of the year is : %02d",last);
    return 0;
}