#include <stdio.h>
int fib_recursive(int n) // This is the function for fibinacchi series
{
    if (n == 0 || n == 1)
    // Base Cases: Stopping condition for the recursion.
    // The 0th Fibonacci number is 0, and the 1st Fibonacci number is 1.
    // Returning 'n' directly satisfies both cases without further recursive calls.
    {
        return n;
    }
    else
        // Recursive Case: Breakdown into smaller subproblems.
        // Any Fibonacci number after 0 and 1 is the sum of the two preceding numbers.
        // This calls the function twice with smaller inputs (n-1 and n-2) until reaching the base cases.
        return fib_recursive(n - 1) + fib_recursive(n - 2);
}
int main()
{
    int n;
    printf("Enter the number of terms :");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Please Enter a positive integer Or a number !!\n");
        return 1; // Tells The Os the program Ended with an error
    }
    printf("Fibonacci series of %d term is :", n);
    for (int i = 0; i < n; i++) // This helps to print recuersive pattern if not pu this then
    // The program will only print one random kinda letter maybe i dunno but it was an error
    {
        printf(" %d", fib_recursive(i));
    }
    printf("\n");

    return 0;
}