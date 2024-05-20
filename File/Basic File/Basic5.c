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
    char buff[100];
    fscanf(fp, "%s", buff);//scanning with fscanf then we are saving the data to fp then then normarl string scan "s" lastly normal string scan function

    printf("the data in buffer is: %s\n", buff);

    fgets(buff, 500, fp);//here with fgets we are reading the strings then the size then we are increasing its size then lastly from where to read the data

    printf("the data in buffer is: %s\n", buff);

    fclose(fp);
    return 0;
}
