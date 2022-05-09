#include <stdio.h>
int main ()
{
  int x;
  printf("Enter a value :");
  scanf("%d",&x);
  for(int i=1;i<=x;i++) 
  {
    printf("%d",i);
  }
 return 0;
}