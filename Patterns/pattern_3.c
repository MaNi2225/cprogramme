#include <stdio.h>
int main()
{
    int x;
    printf("Enter a value :");
    scanf("%d",&x);
    int number = 1;
    for(int i=1;i<=x;i++)
    {
        
        for(int j=1;j<=i;j++)
        {
            printf("%d",number++);
            printf("\t");
        }
        printf("\n");
    }
}