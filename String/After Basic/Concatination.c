#include <stdio.h>
int main()
{
    char name1[100] = "My name is ";
    char name2[] = "Adham Zarif";
    int i = 0,count = 0,j = 0;

    while(name1[i] != '\0')
    {

        i++;
        count++;
    }
    while(name2[j] != '\0')
    {

        name1[count+j] = name2[j];
        j++;
    }
    printf("Name is: %s",name1);
    return 0;
}
