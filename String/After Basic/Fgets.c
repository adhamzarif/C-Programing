#include <stdio.h>
int main()
{
    char ch[100];
    
    fgets(ch,100,stdin); //here firsht we are telling the array name then its size and then its input rule stdin(standard input)
                        // Fgets take enter as an input
                        
    printf("%s",ch);
    return 0;
}
