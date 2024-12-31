//Usage
//Static data load,dropdown usage in website
#include <stdio.h>
enum days_of_the_week //Custom User defined Datatype
{
    Sun,Mon,Tue,Wednesday,Thursday,Friday //integer type constant
};
int main() {
    
    enum days_of_the_week day1,day2; //creating variable day1,day2
    day1 = Tue;
    printf("Day1 = %d\n",day1); //output Day1 = 2
    day2 = Friday;
    int diff = day2 - day1;
    printf("Diff = %d\n",diff);
    printf("Happy Coding!!");
    return 0;
}
