#include <stdio.h>
int main()
{
    char name[100];
    int i = 0,count = 0;

    printf("Enter Your Name:\n");
    scanf("%s",name);
    while(name[i] != '\0')
    {

        i++;
        count++;
    }
    printf("Length of name is: %d",count);
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     char name[] = "Adham Zarif";
//     int i = 0,count = 0;

//     while(name[i] != '\0')
//     {
//         i++;
//         count++;
//     }
//     printf("Length of name is: %d",count);
//     return 0;
// }
