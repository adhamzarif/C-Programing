#include <stdio.h>
struct Student
{
    int id;
    double cgpa;
    char name[100];
}/*stu1*/ ; //we can declare a variable here too!!
int main()
{
    struct Student s1; //declaring a veriable s1 for student structure

    //Scanning
    printf("Enter Your ID: \n");
    scanf("%d",&s1.id);
    printf("Enter Your CGPA: \n");
    scanf("%lf",&s1.cgpa);
    printf("Enter Your Name: \n");
    scanf(" %[^\n]", s1.name); // Note the space before %[^\n] using

    //Printing
    printf("Your ID is: %d\n",s1.id);
    printf("Your CGPA is: %lf\n",s1.cgpa);
    printf("Your Name is: %s\n",s1.name);
    return 0;
}
