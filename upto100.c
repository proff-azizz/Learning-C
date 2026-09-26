#include <stdio.h>
int main() {
    int num,i;
    printf("Enter the number you want multiplication table for: ");
    scanf("%d", &num);
    printf("Multiplication table of %d:\n", num);
    printf("This will print up to 100 multiplication table of %d:\n", num);
    for(i=1; i<=100; i++) {
        printf("%d x %d = %d\n", num, i, num*i);
    }
    return 0;       
}