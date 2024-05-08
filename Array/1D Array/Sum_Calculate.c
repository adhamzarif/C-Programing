#include <stdio.h>
int main()
{
    int a[10],sum = 0;
    int i;
    for(i = 0;i < 10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i = 0;i < 10;i++)
    {
        sum = sum + a[i];
    }
    printf("Sum is: %d",sum);
    return 0;
}
