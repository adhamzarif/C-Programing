#include <stdio.h>
int main() {
  char ch[500];
  int i, capital, small, digit, value;
  i = capital = small = digit = 0;
  printf("Enter a string: ");
  gets(ch);
  while ((value = ch[i]) != '\0') {

    if (value >= '0' && value <= '9') {
      digit++;
    } else if (value >= 'a' && value <= 'z') {
      small++;
    } else if (value >= 'A' && value <= 'Z') {
      capital++;
    }
    i++;
  }
  printf("Capital: %d\n", capital);
  printf("Small: %d\n", small);
  printf("Digit: %d\n", digit);

  return 0;
}
