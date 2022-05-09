#include <stdio.h>

void printtable(int n)
{

    for(int i=1;i<=10;i++)
    {
        printf("%d  X %d = %d\n",n,i,n*i);
    }
}

int main()
{
    int x;
    printf("Enter a value :");
    scanf("%d",&x);
    for(int i=1;i<=x;i++)
    {
        printtable(i);
    }

}