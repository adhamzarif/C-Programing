#include <stdio.h>
int get_sum(int x, int y)
{    int sum = x + y;

    return sum;
}
void say_hi()
{
    printf("Hello Function");
}
int main()
{
    printf("Function starts\n");
    say_hi();
    get_sum(10,20);
    int result = get_sum(10,20);
    printf("\nSum is: %d",result);
    return 0;
}
