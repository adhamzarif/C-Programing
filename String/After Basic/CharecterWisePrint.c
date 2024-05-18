#include <stdio.h>
int main()
{
    char name[] = "Zarif"; //Using line breaking charecter
    
    int i = 0;
    while(name[i] != '\0')
    {
        printf("%c\n",name[i]);
        i++;
    }

    return 0;
}
