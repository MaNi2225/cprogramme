#include <stdio.h>

int main()
{
    int x = 0;
    int y = 0;
    int z = 0;
    int biggestNumber=0;

    printf("enter the value x :");
    scanf("%d",&x);
    printf("enter the value y :");
    scanf("%d",&y);
    printf("Enter the value z :");
    scanf("%d",&z);

    if((x==y) && (y==z))
    {
        printf("All x,y,z are equal");
        return 1;
    }

    if(x > y)
    {
       biggestNumber = x;
       if(x<z)
       {
           biggestNumber = z;
       }
    }
    else if(y>x)
    {
        biggestNumber = y;
        if(y<z)
        {
           biggestNumber = z;
        }
    }
    else
    {
        printf("ERROR: Not able to find biggest number");
        return 1;
    }
    printf("Biggest value is =%d",biggestNumber);
    
    printf("\n");  
    return 0;
}   

    