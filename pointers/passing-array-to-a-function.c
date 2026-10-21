#include <stdio.h>
void changeFirst(int *p)
{
    *p =100;
}
int main(void)
{
    int numbers[3]={10,20,30 };
    changeFirst(numbers);
    printf("%d", numbers[0]);
    return 0;
}