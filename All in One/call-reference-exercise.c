#include <stdio.h>
int a=4,b=3;
int add(int *addition)
{
    *addition= a + b;
}
int subtract(int *sub)
{
    *sub = a - b;
}
int main()
{
    int c;
    printf("The value of a is %d and b is %d\n",a,b);
    add(&add);
    printf("%d\n",add);
    subtract(&subtract);
    printf("%d\n",subtract);

    return 0;
}