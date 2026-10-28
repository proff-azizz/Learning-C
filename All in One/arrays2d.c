#include <stdio.h>
int main()
{
    int marks[2][4] = {{45, 67, 89, 90},
                       {55, 77, 88, 99}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            // printf("The value of %d,%d  element of the array is %d\n", i, j, marks[i][j]);
            printf("%d ", marks[i][j]); //This will print the array in a matrix form
        }

        printf("\n");//This will print the array in a matrix form makes a new line after each row of the array
    }

    return 0;
}