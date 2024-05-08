#include <stdio.h>
int main()
{
    FILE *fp; //at first we are declaring a pointer array
    fp = fopen("Test_file.txt","w"); //here with fopen we are are openning a file then we named the file Test_file as a txt file then we used w as a perameter of write function

    //Now after openning the file we will do some work
    int i;
    for(i = 65;i <= 90; i++)
    {
        fputc( i, fp); // here with fputc we are printing the file then in perameter we are telling what to print & then where it will be saved
    }
    return 0;
}
