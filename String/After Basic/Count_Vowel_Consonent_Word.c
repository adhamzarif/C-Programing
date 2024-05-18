#include <stdio.h>
int main() {
  char ch[500];
  int i, vowel, consonent, word, digit, others, value;
  i = vowel = consonent = word = digit = others = 0;
  printf("Enter a string: ");
  gets(ch);
  while ((value = ch[i]) != '\0') {
    if (value == 'a' || value == 'e' || value == 'i' || value == 'o' ||
        value == 'u' || value == 'A' || value == 'E' || value == 'I' ||
        value == 'O' || value == 'U') {
      vowel++;
    } else if (value == ' ') {
      word++;
    } else if (value >= '0' && value <= '9') {
      digit++;
    } else if (value >= 'a' && value <= 'z') {
      consonent++;
    } else {
      others++;
    }
    i++;
  }
  printf("Vowels: %d\n", vowel);
  printf("Consonents: %d\n", consonent);
  printf("Words: %d\n", word);
  printf("Digits: %d\n", digit);
  printf("Others: %d\n", others);

  return 0;
}
