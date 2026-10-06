//write a program to make basic calulations using arithmetic operators & it should ask user for input

#include <stdio.h>
int main(){
    int a, b, sum, difference, product;
    float division;
printf("Enter first number:");
scanf("%d", &a);
printf("Enter second number:");
scanf("%d", &b);
sum = a+b;
difference = a-b;
product = a*b;
division = a/b; 
if(b==0 || b>a){
    printf("Division by zero is not allowed or check if second number is greater than first.\n");
    return 1; // Exit the program with an error code
}
printf("The sum of %d and %d is: %d\n", a, b, sum);
printf("The difference of %d and %d is: %d\n", a, b, difference);
printf("The product of %d and %d is: %d\n", a, b, product);
printf("The division of %d and %d is: %.2f\n", a, b, division);
    return 0;
}