#include <stdio.h>

int main(void) {
  int n;
  scanf("%d",&n);
  int arr[n+1]; //as we will work with indexing with + 1
  for(int i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
  int pos,value;
  scanf("%d %d",&pos, &value);
  //Position shifting
  for(int i=n;i>=pos+1;i--)
    {
      arr[i]=arr[i-1];
    }
  arr[pos]=value;
  for(int i=0;i<n+1;i++)
    {
      printf("%d ",arr[i]);
    }
  return 0;
}
