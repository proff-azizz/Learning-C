#include <stdio.h>
int main()
{
    int score = 25;
    int avg = 244;

    int *p = &score;
    int *p1 = &avg;
    *p = 400;
    *p1 = 9000;
    printf("%d\n", score);
    printf("%d",*p1);
    return 0;
}
