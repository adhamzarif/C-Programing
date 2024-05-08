#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)malloc(20); //we are allocating a 20 size value on memory & declaring its type also converting it to pointer
    // ptr = (int *)malloc(5 * sizeof(int));
    if(ptr == NULL)
    {
        printf("Memory Allocation Failed\n");
    }
    else
    {
        printf("Memory Allocation Successful\n");
    }
    return 0;
}
