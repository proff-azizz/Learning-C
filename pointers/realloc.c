#include <stdio.h>
#include <stdlib.h>
int main(void)
// {
//     int *p = malloc(3 * sizeof(int)); // allocates memory for pointer p
//     if (p == NULL)
//     {
//         printf("Invalid Input");
//         return 1;
//     }
//     int *temp = realloc(p, 5 * sizeof(int)); // reallocates memory of size 5 in a new pointer so if allocation fails we dont lose the original allocation
//     if (temp != NULL)
//     {
//         p = temp; // stores the value of temp in p
//     }
//     else
//     {
//         free(p); // free the memory allocated by p if temp = NULL
//         return 1;
//     }
// }
// {
//     int *numbers = malloc(2 * sizeof(int)); // allocate meomory
//     if (numbers == NULL)
//     {
//         return 1;
//     }
//     numbers[0] = 10;
//     numbers[1] = 20;
//     int *temp = realloc(numbers, 3 * sizeof(int));
//     if (temp == NULL)
//     {
//         free(numbers);
//         return 1;
//     }

//     numbers = temp;
//     numbers[2] = 30;
//     printf("%d %d %d\n", numbers[0], numbers[1], numbers[2]);
//     free(numbers);
//     return 0;
// }
// program 2
// {
//     int *numbers = malloc(4 * sizeof(int));
//     if (numbers == NULL)
//     {
//         return 1;
//     }
//     numbers[0] = 10;
//     numbers[1] = 20;
//     numbers[2] = 30;
//     numbers[3] = 50;
//     int *new = realloc(numbers, 3 * sizeof(int));
//     if (new == NULL)
//     {
//         free(numbers);
//         return 1;
//     }
//     numbers = new;
//     numbers[2] = 40;

//     printf("%d %d %d %d", numbers[0], numbers[1], numbers[2],numbers[3]);
//     free(new);

//     return 0;
// }
// {
//     int *numbers = calloc(3,sizeof(int));
//     if(numbers==NULL)
//     return 1;
//     numbers[0]=10;
//     free(numbers);
//     numbers = NULL;
//     if (numbers==NULL)
//     printf("No Memory");
//     free(numbers);
// }
{
    int *p=malloc(sizeof(int));
    *p = 10;
    int *q=malloc(sizeof(int));
    *q=20;
    free(p);
    p=q;
    
    q=NULL;
    p=NULL;
}