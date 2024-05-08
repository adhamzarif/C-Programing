#include <stdio.h>
int main()
{
    FILE *fp; //at first we are declaring a pointer array
    fp = fopen("Test_file.txt","r"); //here with fopen we are are openning a file then we named the file Test_file as a txt file then we used w as a perameter of write function

    //Now after openning the file we will do some work
    int i;
    for(i = 65;i <= 90; i++)
    {
        fputc(i, fp); // here with fputc we are printing the file then in perameter we are telling what to print & then where it will be saved
        //fputc returns only charecter value
    }

    char arr[100] = "Hello,I'm Good Today!";
    fputs(arr, fp); // here we are declaring an string then we printing it as well as rules
    //fputs returns string values

    //We have another function to print things with another way
    fprintf(fp,"My id is: %d",8497354); // here in fprintf we have to tell first where the data will be saved then what to print as well as normal print function
    
    int c;
    c = fgetc(fp);
    printf("The first charecter is: %c\n", c); //here we will read from fp file's first charecter
    return 0;
}
