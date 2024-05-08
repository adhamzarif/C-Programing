#include <stdio.h>
int main()
{
    int num1 = 10,num2 = 20;
    int *ptr1,*ptr2;
    ptr1 = &num1;
    ptr2 = &num2;
    int sum = *ptr1 + *ptr2;
    printf("%d\n",num1);
    printf("%d\n",num2);
    printf("%d\n",*ptr1); 
    printf("%d\n",*ptr2); 
    printf("Sum is: %d\n",sum); 

    return 0;
}
