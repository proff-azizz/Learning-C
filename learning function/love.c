//This is an example with argument but without return value
#include <stdio.h>
void printily(int n, int p)
{
    for (int i=1; i<=n; i++)
    {
        printf("%d. %d \n",i,p);
    }
}
int main()
{
    int n,p;
    printf("So What do you want to print ?");
    scanf("%d", &p);
    printf("Enter the number of times you want to print %d:", p);
    scanf("%d", &n);
    printily(n, p);
    return 0;
}