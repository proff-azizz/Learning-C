#include <stdio.h>
int main()
{
    int add, sub, prod, div, mod, num1, num2;
    int operation;
    while (1)
    {
        printf("Enter 1st number\n");
       
        if (scanf("%d", &num1) != 1)
        {
            printf("Invalid input. Please enter a valid integer.\n");
            return 1; // Exit the program with an error code
        }
        printf("Enter 2nd number:\n");
        
        if (scanf("%d", &num2) != 1)
        {
            printf("Invalid input. Please enter a valid integer.\n");
            return 1; // Exit the program with an error code
        }
        printf("Select the operation you want to perform\n");
        printf("Enter 0 to exit the calculator\n");
        printf("1. Add +\n");
        printf("2. substract -\n");
        printf("3. Multiply *\n");
        printf("4. Division /\n");
        printf("5. Modulus %%\n");
        scanf(" %d", &operation);
        if (operation == 0)
        {
            printf("Exiting the calculator. Goodbye!\n");
            break;
        }

        switch (operation)
        {
        case 1:
            add = num1 + num2;
            printf("The sum of %d and %d is %d\n", num1, num2, add);
            break;
        case 2:
            sub = num1 - num2;
            printf("The difference of %d and %d is %d\n", num1, num2, sub);
            break;
        case 3:
            prod = num1 * num2;
            printf("The product of %d and %d is %d\n", num1, num2, prod);
            break;
        case 4:
            if (num2 == 0)
            {
                printf("Error: Division by zero is not allowed.\n");
            }

            else if (num1 == num2)
            {
                printf("The division of %d and %d is 1\n", num1, num2);
            }
            else
            {
                printf("The division of %d and %d is %d\n", num1, num2, num1 / num2);
            }
            break;
        case 5:
            if (num2 != 0)
            {

                mod = num1 % num2;
                printf("The modulus of %d and %d is %d\n", num1, num2, mod);
                break;
            }
            else
            {
                printf("Error: Modulus by zero is not allowed.\n");
                break;
            }

        default:
            printf("Invalid operation.\n");
        }
    }

    return 0;
}