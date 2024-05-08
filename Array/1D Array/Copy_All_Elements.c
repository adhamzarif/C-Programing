#include <stdio.h>
int main()
{
    int i,n,num;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n],b[n];
//For A
    printf("Enter numbers: ");
    for(i = 0;i < n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array of A: ");
    for(i = 0;i < n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
//Replace A to B
    for(i = 0;i < n;i++)
    {
        b[i] = a[i];
    }
    printf("Array of B: ");
    for(i = 0;i < n;i++)
    {
        printf("%d ",b[i]);
    }

    return 0;
}
