#include <stdio.h>
int main()
{
    int num,i;
    printf("Enter terms: ");
    scanf("%d",&num);

    int arr[100];
    arr[0] = 0;
    arr[1] = 1;
    for(i = 2;i < num;i++)
    {
        arr[i] =  arr[i-2] + arr[i-1];
    }
    printf("\n");
    for(i = 0;i< num;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
