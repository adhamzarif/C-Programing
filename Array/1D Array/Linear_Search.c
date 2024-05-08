#include <stdio.h>
int main()
{
    int i,value,n,position = -1; //as because arrays starts from 0 thats why initialized from -1
    printf("Enter value to search: ");
    scanf("%d",&value);
    int a[] = {10, 20, 30, 40, 50};
    for(i = 0;i < 5;i++)
    {
        if(value == a[i])
        {
            position = i+1;
            break;
        }
    }
    if(position == -1)
    {
        printf("Not Found!!,Sorry\n");
    }
    else
    {
        printf("Yes!!,Found it %d at %d Position",value,position);
    }

    return 0;
}
