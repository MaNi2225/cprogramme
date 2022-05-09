#include <stdio.h>
int main()
{
    int x;
    printf("Enter a value :");
    scanf("%d",&x);
    for(int i=x;i>=1;i--)
    {
        
        for(int j=1;j<=i;j++)    
        {
            printf("%d",i);
        }
        printf("\n");
    }
}