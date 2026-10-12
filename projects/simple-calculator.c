#include <stdio.h>
int main()
{
    int add,sub,prod,div,mod,num1,num2;
    int operation;
    while (1)
    {
        printf("Enter 1st number\n");
        scanf("%d",&num1);
        printf("Enter 2nd number:\n");
        scanf(" %d",&num2);
        printf("Which operation do you want to perform ?\n");
        printf("Press q to quit\n");
        printf("Select the operation you want to perform\n");
        printf("1. Add +\n");
        printf("2. substract -\n");
        printf("3. Multiply *\n");
        printf("4. Division /\n");
        printf("5. Modulus %%\n");
        scanf(" %d",&operation);
        
        switch (operation)
        {
        case 1:
            add=num1+num2;
            printf("The sum of %d and %d is %d\n",num1,num2,add);
            break;
        case 2:
            sub=num1-num2;
            printf("The difference of %d and %d is %d\n",num1,num2,sub);
            break; 
        case 3:
            prod=num1*num2;
            printf("The product of %d and %d is %d\n",num1,num2,prod);
            break;
        case 4:
    if (num2 == 0) {
        printf("Error: Division by zero is not allowed.\n");
    }
    else if (num1 > num2) {
        div = num1 / num2;
        printf("The division of %d and %d is %d\n", num1, num2, div);
    }
    else if(num1 == num2) {
        printf("The division of %d and %d is 1\n", num1, num2);
    }
    else {
        printf("Please enter a value where number1 is greater than number2.\n");
    }
    break;


        case 5:
            mod=num1%num2;
            printf("The modulus of %d and %d is %d\n",num1,num2,mod);
            break;
    
        default:
            printf("Invalid operation.\n");
        }
    }
    return 0;
}