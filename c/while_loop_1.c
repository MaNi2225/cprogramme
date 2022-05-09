#include<stdio.h>

void main()
{
    int x;
    int print_now = 1;
    while(print_now)
    {
     printf("Enter a value :");
     scanf("%d",&x);
    //print_now = 1;
    if  (x==100)
    {
        print_now = 0;
    }
    }
}
