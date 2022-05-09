#include <stdio.h>
int main()
{
    int x;
    printf("enter a value :");
    scanf("%d",&x);
    for (int i= x;i>=1;i--)
    {
        printf("%d\n",i);
    }
}