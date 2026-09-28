#include <stdio.h>
int factorial(int number) //This is the function (factorial) that is called in printf after int main() in function
{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return number * factorial(number - 1);
    }
}
int main()
{
    int num;
    printf("Enter a number to find it's factorial :");
    scanf("%d", &num);
    printf("factorial of %d is %d", num, factorial(num)); //You use function that you declared in int (var) after int main() in function
    return 0;
}