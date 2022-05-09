#include <stdio.h>
int main ()
{
  int x;
  printf("Enter a value :");
  scanf("%d",&x);
  for(int i=1;i<=x;(i=i+2)) 
  {
    // Print only if i is odd number
    /*
    // Version-1: using if statement
    if(i%2==1)
    {
    printf("%d\n",i);
    }*/
    printf("%d\n",i);
  }
 return 0;
}