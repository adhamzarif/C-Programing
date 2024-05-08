#include <stdio.h>
int square(int a)
{
    return a * a;
}
int main()
{
    int num;
    printf("Enter Numbers: ");
    scanf("%d",&num);
    printf("Square is: %d\n",square(num));
    return 0;
}
