//This is an example of a function with arguments and return value
    
#include <stdio.h>
int sum(int a,int b)
{
    return a+b;  //This returns the sum value to the calling function in this case c=sum(a,b) is calling it's value
}
int main()
{
    int a,b,c;
   printf("Enter the first number:");
   scanf("%d",&a);
   printf("Enter the second number:");
   scanf("%d", &b);
    c=sum(a,b); //THis is calling the return vlaue of the function sum() and storing it in c
    printf("The sum of %d and %d is %d\n",a,b,c);
    return 0;
}