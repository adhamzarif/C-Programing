#include <stdio.h>
void square(int n)
{
    n = n * n;
    printf("%d",n);
}
int main()
{
    int number = 4;
    square(number);
    printf("%d",number);
    return 0;
}
