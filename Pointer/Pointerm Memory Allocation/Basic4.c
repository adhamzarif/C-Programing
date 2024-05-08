#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)calloc(4,20);
    // ptr = (int *)calloc(4,sizeof(int));
    if(ptr == NULL)
    {
        printf("Memory Allocation Failed\n");
    }
    else
    {
        printf("Memory Allocation Successful\n");
        //do the work
        ptr = realloc(ptr,100);
        printf("Memory Reallocation Successful\n");
    }
    return 0;
}
