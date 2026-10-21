#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int count=3;
    int *numbers = malloc(count * sizeof(int)); //allocates memory using malloc for mumbers
    if (numbers == NULL) //check if memory is allocated or not 
    {
        printf("Memory allocation failed\n");
        return 1;
    }
numbers[0]=10;
numbers[1]=20;
numbers[2]=30;
*(numbers+2)=99;
printf("%d\n", numbers[2]);
free(numbers); // frees the used memory
return 0;
}