#include <stdio.h>
int maxNumArray(int x[])
{
    int i;
    int max = x[0];
    for(i = 0;i < 5;i++)
    {
        if(max < x[i])
        {
            max = x[i];
        }
    }
    return max;
}
int main()
{
    int num[] = {10,20,30,40,50};
    int result = maxNumArray(num);
    printf("Maximum Number is: %d",result);
    return 0;
}
