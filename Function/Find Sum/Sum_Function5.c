#include <stdio.h>
int get_sum(int x,int y) //int means whats types of function it will return 
{
    int sum = x + y;
    return sum; //this means it will return sum of the inputs
}
int main()
{
    get_sum(10,20); //Function call & assigning value
    int result = get_sum(10,20);
    printf("Sum is: %d",result);
    return 0;
}
