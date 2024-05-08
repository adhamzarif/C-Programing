#include <stdio.h>
int main()
{
    char value = 'a';
    char *ptr; //we are declaring a pointer
    ptr = &value; //we are assigning the num value to pointer
    printf("%c\n",value); //printing just num variables value
    printf("%c\n",*ptr); //here while printing,we printing the num value where it is assigned
    printf("%p\n",&ptr); //here we are printing the memory location of the variable
    return 0;
}
