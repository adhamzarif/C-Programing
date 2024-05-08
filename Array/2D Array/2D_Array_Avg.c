#include <stdio.h>
int main()
{   
    int i,j,n,m;
    printf("Enter Row Number: ");
    scanf("%d",&n);
    printf("Enter Column Number: ");
    scanf("%d",&m);
    int a[n][m],b[n][m];
    //For A
        //Scanning
    for(i = 0;i < n;i++)
    {   
        for(j = 0;j < m;j++)
        {
            printf("A[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
        
    }
    //For B
        //Scanning
    for(i = 0;i < n;i++)
    {   
        for(j = 0;j < m;j++)
        {
            printf("B[%d][%d]: ",i,j);
            scanf("%d",&b[i][j]);
        }
        
    }
    //Printing A
        //Printing
    printf("A: ");
    for(i = 0;i < n;i++)
    {
        printf("\t");
        for(j = 0;j < m;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    //Printing B
        //Printing
    printf("B: ");
    for(i = 0;i < n;i++)
    {
        printf("\t");
        for(j = 0;j < m;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
