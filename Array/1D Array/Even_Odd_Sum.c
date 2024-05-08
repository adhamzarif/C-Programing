#include <stdio.h>
int main()
{
    int a[5],even_sum = 0,odd_sum = 0;
    int i;

    for(i = 0;i < 5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i = 0;i < 5;i++)
    {
        if(a[i] % 2 == 0)
        {
            even_sum += a[i];
        }
        else
        {
            odd_sum += a[i];
        }
    }
    printf("Sum of odd values: %d\n",odd_sum);
    printf("Sum of even values: %d\n",even_sum);
    
    return 0;
}
