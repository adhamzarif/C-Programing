#include <stdio.h>
int main()
{
    int a[5],AB[5];
    int i,j,B[5];
    printf("Enter Value for A: ");
    for(i = 0;i < 5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter Value for B: ");
    for(i = 0;i < 5;i++)
    {
        scanf("%d",&B[i]);
    }
    for(i = 0;i < 5;i++)
    {
        AB[i] = a[i] + B[i];
    }
    for(i = 0;i < 5;i++)
    {
        printf("Sum is: %d\n",AB[i]);
    }
    
    return 0;
}
