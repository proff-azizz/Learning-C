#include <stdio.h>

int fib_recursive(int n)
{
    if (n == 1 || n == 2)
    {
        return n;
    }
    return fib_recursive(n - 1) + fib_recursive(n - 2);
}
int main()
{
    int n;
    printf("Enter the number :");
    scanf("%d", &n);
    printf("Fibonacci series of %d is : %d", n, fib_recursive(n));
    return 0;
}