#include <stdio.h>
int main()
{
    int x[2][3] = {11, 12, 13, // 2 means here will be 2 arrays inside this array & 3 meams each array will have 3 elements
                    21, 22, 23};
    printf("%d\n",x[0][0]);
    int sum = x[0][0] + x[1][1];
    printf("Sum is: %d",sum);
    return 0;
}
