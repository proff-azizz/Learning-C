#include <stdio.h>
int changevalue(int *address)
{
    *address =9090;
}
int main()
{
    int a=32,b=345;
    printf("The value of a is now %d\n",a);
    changevalue(&a);
    printf("The value of a after calling by reference is %d",a);
    return 0;
}