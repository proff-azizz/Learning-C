#include <stdio.h>
void increase(int *p)
{
    *p =*p + 1;
}
void decrease(int *d)
{
    *d =*d -1;
}
int main(void)
{
    int score =7;
    int point =9;
    
        increase(&score);
    printf("%d\n",score);
    decrease(&point);
    printf("%d\n",point);
}