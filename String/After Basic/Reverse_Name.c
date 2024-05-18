#include <stdio.h>

int main() {
    int count = 0, i = 0, j;
    char str1[100] = "Adham Zarif", str2[100];
    
    // Calculate the length of str1
    while (str1[i] != '\0') {
        i++;
        count++;
    }

    // Reverse the string
    for (j = 0, i = count - 1; i >= 0; i--, j++) {
        str2[j] = str1[i];
    }
    str2[j] = '\0'; // Null-terminate the reversed string

    printf("%s\n", str2);

    return 0;
}
