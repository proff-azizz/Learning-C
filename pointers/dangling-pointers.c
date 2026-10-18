#include <stdio.h>
#include <stdlib.h>
// Dangling Pointer is a pointer that refers to an object whose lifetime has ended or to memory that is no longer valid
int main(void)
{
    int *p =malloc(sizeof(int));
    if (p==NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    *p=50;
    printf("%d",*p);
    free(p);
    p=NULL;
    return 0;

}