#include <stdio.h>

int main()
{
    int x = 0;
    int y = 0;
    int z = 0;

    printf("enter the value x :");
    scanf("%d",&x);
    printf("enter the value y :");
    scanf("%d",&y);
    printf("Enter the value z :");
    scanf("%d",&z);

    if((x==y) && (y==z))
    {
        printf("All x,y,z are equal");
    }
    else if((x > y) && (x > z))
    {
       printf("Biggest value is =%d ",x);
    }
    else if((y>x) && (y > z))
    {
        printf("Biggest value is =%d",y);
    }
    else if((z>x) && (z > y))
    {
        printf("Biggest value is =%d",z);
    }
    else
    {
        printf("ERROR: Not able to find biggest number");
    }
    printf("\n");  
    return 0;
}   

    