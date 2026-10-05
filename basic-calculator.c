#include <stdio.h>
int main()
{
    int a,b,sum,diff,prod,div,mod;
    char op;
    printf("Enter first number : \n ");
    scanf("%d",&a);
    printf("Enter second number : \n ");
    scanf("%d",&b);
    printf("You can perform the following operations : \n");
    printf(" Addition : +\t\t\t subtraction : - \n multiplication : *\t\t\t division : / \n modulus : % \n");
    printf("Enter the operation you want to perform : \n");
    scanf(" %c", &op);  // Note the space before %c to consume any leftover newline character
    if (op == '+')
    {
        sum = a + b;
        printf("Sum of two numbers is : %d",sum);
    }
    else if (op == '-')
    {
        diff = a - b;
        printf("Difference of two numbers is : %d",diff);
    }
    else if (op == '*')
    {
        prod = a * b;
        printf("Product of two numbers is : %d",prod);
    }
    else if (op == '/')
    {
        div = a / b;
        printf("Division of two numbers is : %d",div);
    }
    else if (op == '%')
    {
        mod = a % b;
        printf("Modulus of two numbers is : %d",mod);
    }
    else
    {
        printf("Invalid operation");
    }
    return 0;

}