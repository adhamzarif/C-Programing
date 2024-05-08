#include <stdio.h>
int main()
{
    int num = 10;
    int *ptr; //we are declaring a pointer
    ptr = &num; //we are assigning the num value to pointer
    printf("%d\n",num); //printing just num variables value
    printf("%d\n",*ptr); //here while printing,we printing the num value where it is assigned
    printf("%p\n",&ptr); //here we are printing the memory location of the variable
    return 0;
}
