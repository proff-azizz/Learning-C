#include <stdio.h>
int main(void)
{
    int score=15;
    int *p = &score;
    int *q = &score;

    *p=*p*2;
    *q=*q*10;
    printf("%d",score);
}
