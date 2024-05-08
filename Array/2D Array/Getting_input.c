#include <stdio.h>
int main()
{   
    int i,j,n,m;
    printf("Enter Row Number: ");
    scanf("%d",&n);
    printf("Enter Column Number: ");
    scanf("%d",&m);
    int a[n][m];

        //Scanning
    for(i = 0;i < n;i++)
    {   
        for(j = 0;j < m;j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }

        //Printing
    for(i = 0;i < n;i++)
    {
        for(j = 0;j < m;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
