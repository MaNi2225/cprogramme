#include <stdio.h>
int main()
{
    int x;
    printf("Enter a value :");
    scanf("%d",&x);
    int number = 0;
    for(int i=1;i<=x;i++)
    {
        int t = 0;
        for(int j=1;j<=i;j++)
        {
            t++;
            number = number+1;
        }
        //printf("%d", number);
        for(int j=number; j>=t;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}