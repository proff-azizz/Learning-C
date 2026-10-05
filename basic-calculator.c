#include <stdio.h>
int main()
{
    int a,b,sum,diff,prod,div,mod,q;
    char op;
      while (1)
    {
    printf("\n Enter first number :  ");
    scanf("%d",&a);
    printf("\n Enter second number : ");
    scanf("%d",&b);
    printf("\nEnter q to exit the program: \n");
    printf("You can perform the following operations : \n");
    printf(" Addition : + \t \t \t subtraction : - \n multiplication : * \t \t division : / \n modulus : %% \n");
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
    { if (b == 0)
        {
            printf("Error: Division by zero is not allowed.\n");
        }
        else
       {
        div = a / b;
        printf("Division of two numbers is : %d",div);
       }
    }
    else if (op == '%')
    {
        mod = a % b;
        printf("Modulus of two numbers is : %d",mod);
    }
    else if (op == 'q')
    {
        printf("Exiting the program.....\n Done.\n");
        break;  // Exit the loop and terminate the program
    }
    else
    {
        printf("Invalid operation");
    }
    }
    return 0;
}