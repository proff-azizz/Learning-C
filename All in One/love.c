//This is an example with argument but without return value
#include <stdio.h>
void printily(int n)
{
    for (int i=1; i<=n; i++)
    {
        printf("%d. I LOVE YOU\n",i);
    }
}
int main()
{
    int n;
    printf("Enter the number of times you want to print I LOVE YOU:");
    scanf("%d",&n);
    printily(n);
    return 0;
}