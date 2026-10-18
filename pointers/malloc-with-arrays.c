#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int count=3;
    int *numbers = malloc(count * sizeof(int));
    if (numbers == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }
numbers[0]=10;
numbers[1]=20;
numbers[2]=30;
printf("%d\n", numbers[1]);
free(numbers);
return 0;
}