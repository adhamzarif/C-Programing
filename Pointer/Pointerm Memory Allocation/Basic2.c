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
    }
    return 0;
}
