#include <stdio.h>
int sum(int a,int b)
{
    return a + b;
}
int main()
{
    int num1,num2;
    printf("Enter Numbers: ");
    scanf("%d %d",&num1, &num2);
    printf("Sum is: %d\n",sum(num1,num2));
    return 0;
}
