#include <stdio.h>
int main() {
  int x, y, a = 1, b = 1, c = 1;
  scanf("%d%d", &x, &y);
  for (int i = 1; i <= x; i++) {
    a *= i;
  }
  for (int j = 1; j <= y; j++) {
    b *= j;
  }
  for (int k = 1; k <= (x - y); k++) {
    c *= k;
  }
  printf("%d", a / (b * c));

  return 0;
}
