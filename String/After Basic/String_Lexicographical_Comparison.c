#include <stdio.h>

int main(void) {
  char a[100],b[100];
  scanf(" %s %s",a,b);
  int i = 0;
  while(1)
    {
      if(a[i] == '\0' && b[i] == '\0')
      {
        printf("Same\n");
      }
      else if(a[i] == '\0')
      {
        printf("A Small\n");
      }
      else if(b[i] == '\0')
      {
          printf("B Small\n");
      }

      if(a[i] == b[i])
      {
        i++;
      }
      else if(a[i] > b[i]))
      {
        printf("B Small\n");
      }
      else
      {
        printf("A Small\n");
      }

      printf("The End :) \n");
    }
  return 0;
}
