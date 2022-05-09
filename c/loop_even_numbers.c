#include <stdio.h>
int main ()
{
  int x;
  printf("Enter a value :");
  scanf("%d",&x);
  for(int i=2;i<=x;(i=i+2)) 
  {
    printf("%d\n",i);
  }
 return 0;
}