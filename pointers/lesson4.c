#include <stdio.h>
int main()
{
int numbers[3]={10,20,30};
int *p = numbers;
*(p+1)=99;
printf("%d",numbers[1]);
return 0;
}