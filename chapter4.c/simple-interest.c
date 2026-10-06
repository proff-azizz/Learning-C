#include <stdio.h>
int main()
{
    int p,t;
    float r,si;
    printf("Enter principal amount: ");
    scanf("%d",&p);
    printf("Enter time in years: ");
    scanf("%d",&t);
    printf("Enter rate of interest: ");
    scanf("%f",&r);
    si=(p*t*r)/100;
    printf("Simple Interest is: %.2f",si);
    return 0;
}