#include <stdio.h>
int main()
{
    int fib, i = 0, j = 1;
    printf("Enter the number you want fibonacchi series of:");
    scanf("%d", &fib);

    for (int count = 0; count < fib; count++)
    {
        printf("%d ", i);
        int next = i + j;
        i = j;
        j = next;
    }

    return 0;
}
