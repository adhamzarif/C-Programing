#include <stdio.h>
int primenumber(int x)
{
    int i;
    for(i = 2;i < x / 2;i++)
    {
        if(x % i == 0)
        {
            return 1; //Not Prime
        }
    } return 0; //Prime
} 
int main()
{
    printf("Enter start number: ");
    int i,strt,end,count = 0;
    scanf("%d",&strt);
    printf("Enter end number: ");
    scanf("%d",&end);
    for(i = strt;i <= end; i++)
    {
        if(primenumber(i) == 0)
    {
        count++;
    }
    }
    printf("%d Prime Number\n",count);
    return 0;
}
