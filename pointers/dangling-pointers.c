#include <stdio.h>
// Dangling Pointer is a pointer that refers to an object whose lifetime has ended or to memory that is no longer valid
int main(void)
{
    int score = 80;
    int *p = &score;
    p = NULL;
    if (p == NULL)
    {
        printf("No Player selected");
    }
}