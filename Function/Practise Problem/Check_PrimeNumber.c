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
    printf("Enter A Number: ");
    int num;
    scanf("%d",&num);
    if(primenumber(num) == 0)
    {
        printf("Prime Number");
    }
    else
    {
        printf("Not Prime");
    }
    return 0;
}
