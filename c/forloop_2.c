#include <stdio.h>
int main()
{
    int x;
    printf("Enter a value :");
    scanf("%d",&x);
    for (int i=x;i>=1;i--)
    {
        if (i<50 || i>59)
        {
            printf("%d\n",i);
        }

    }

}