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
int salary ;
float tax =0;
printf("Enter you Salary : ");
scanf("%d",&salary);
if (salary<250000)
{
    tax = 0;
}
else if (salary>250000 && salary<=500000)
{
    tax = (salary - 250000) * 0.05;
    printf("You have to pay rs %.2f as tax",tax);
}
  

else if ( salary >500000 && salary<=1000000 )
{
     tax = 250000 * 0.05 + (salary - 500000) * 0.20; 
      printf("You have to pay rs %.2f as tax",tax);
}
else if(salary >1000000)
{
    tax = 250000 * 0.05 + 500000 * 0.20 + (salary - 1000000) * 0.30;
     printf("You have to pay rs %.2f as tax",tax);
}

    return 0;
}