#include <stdio.h>
int swap(int *x,int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    return temp;
}
int main()
{
    int num1 = 10,num2 = 20;
    swap(&num1,&num2);
    printf("After swapping: %d %d",num1,num2);
    return 0;
}

