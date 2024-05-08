#include <stdio.h>
int sum(int *ptr,int x)
{
    int i,sum = 0;
    for(i = 0;i < x;i++)
    {
        sum = sum + *(ptr + i);
    }
    return sum;
}
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int result = sum(a,5);
    printf("Sum is: %d",result);
    return 0;
}
