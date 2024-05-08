#include <stdio.h>
int main()
{
    int a[7]= {-99, 45, 100, 37, 89, -327, 245},max = 0; //max = a[0]
    int i;
    for(i = 1;i < 7;i++)
    {
        if(a[i] < a[max]) //a[i] > max  //max
        {
            max = a[i];
        };
    }
    
    printf("Max is: %d",max);
    return 0;
}
