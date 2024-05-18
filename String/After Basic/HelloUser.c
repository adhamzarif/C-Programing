#include <stdio.h>
int main()
{
    char name[50];
    printf("Enter Your Name: \n");
    gets(name);

    printf("Hello! %s", name);
    return 0;
}
