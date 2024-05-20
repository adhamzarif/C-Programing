#include <stdio.h>

// Define a function named 'square' that takes a pointer to an integer as an argument
void square(int *n)
{
    // Dereference the pointer, square the value, and assign it back to the original variable
    *n = (*n) * (*n);
    
    // Print the squared value
    printf("%d", *n);
}
int main()
{
    // Declare and initialize an integer variable named 'number' with the value 4
    int number = 4;
    
    // Call the 'square' function passing the address of 'number' as an argument
    square(&number);
    
    // Print the value of 'number' after it has been squared
    printf("%d", number);
    
    // Return 0 to indicate successful execution of the program
    return 0;
}
