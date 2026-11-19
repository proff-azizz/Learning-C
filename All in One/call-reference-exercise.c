#include <stdio.h>
int add(int a,int b)
{
    a= a + b;
}
int subtract(int a, int b)
{
    b = a - b;
}
int main()
{
    int a=4,b=3;
    printf("The value of a is %d and b is %d\n",a,b);
    add(&a,&b);
    printf("%d\n",a);
    subtract(&a ,&b);
    printf("%d\n",b);

    return 0;
}