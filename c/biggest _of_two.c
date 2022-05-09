#include <stdio.h>

int main()
{
    int x = 0;
    int y = 0;

    printf("enter the value x :");
    scanf("%d",&x);
    printf("enter the value y :");
    scanf("%d",&y);

    if(x == y)
    {
         printf("Both the values are equal to =%d",y);
       
    }
    else if(x>y)
    {
        printf("Biggest value is =%d ",x);
        
    }
    else
    {
       printf("Biggest value is =%d",y);
    }
    
    
       
  printf("\n");  
  return 0;
}   

    