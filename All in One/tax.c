// Calculate income tax paid by an employee to the government as per the slabs
// mentioned below:
// Income Slab Tax
// 2.5 - 5.0L 5%
// 5.0L - 10.0L 20%
// Above 10.0L 30%
// Note that there is no tax below 2.5L. Take income amount as an input from the user

#include <stdio.h>
int main()
{
    int salary;
    float tax=0;
    printf("Enter the amount you earn yearly : \n");
    scanf("%d", &salary);
    if (salary < 250000)
        printf("There is no tax\n");
    if (salary > 250000 && salary <= 500000)
    {
        tax = (5.0 / 100) * salary;
        printf("You will need to pay %f as a tax amt", tax);
    }
    if (salary > 500000 && salary <= 1000000)
    {
        tax = (tax+ (20.0 / 100) * salary);
        printf("You will need to pay %f as a tax amt", tax);
    }
    if (salary > 1000000)
    {
        tax =(tax + (30.0 / 100) * salary);
        printf("You will need to pay %f as a tax amt", tax);
    }
    return 0;
}