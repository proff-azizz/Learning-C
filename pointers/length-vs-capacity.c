#include <stdio.h>
#include <stdlib.h>
int main()
{
    int length=2;
    int capacity=2;
    int *items=malloc(capacity*sizeof(int));
    items[0]=100;
    items[1]=200;
   
    /*Inventory is full*/
    int newcapacity=capacity*2;
    int *temp = realloc(capacity,newcapacity*sizeof(int));
     items[2]=300;
    items[3]=45;
   printf("%d %d %d %d \n",items[0],items[1],items[2],items[3]);

}