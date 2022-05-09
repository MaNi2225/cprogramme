#include <stdio.h>


int main()
{
    int x;
    printf("Enter a value :");
    scanf("%d",&x);
    for(int i=1;i<=x;i++)
    {
        for(int j=x;j>i;j--)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
}