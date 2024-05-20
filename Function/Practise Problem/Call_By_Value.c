#include <stdio.h>

// Function to square the given number and print the result
void square(int n)
{
    // Squaring the number
    n = n * n;
    
    // Printing the squared value
    printf("%d", n);
}

// Main function
int main()
{
    // Initializing a variable 'number' with value 4
    int number = 4;
    
    // Calling the square function with 'number' as argument
    square(number);
    
    // Printing the original value of 'number'
    printf("%d", number);
    
    // Returning 0 to indicate successful execution
    return 0;
}
