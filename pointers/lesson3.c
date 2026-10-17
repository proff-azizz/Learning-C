// pointers with arrays
 #include <stdio.h>
int main()
{
    int numbers[]={10,20,30};
    int *p = numbers;
printf("%d\n",*p);
printf("%d\n",*(p+1));
printf("%d\n",*(p+2));

}