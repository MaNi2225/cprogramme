#include <stdio.h>

void SayHello(int number)
{
    if (number > 100)
    {
        return;
    }
    for (int i=1; i<=number; i++)
    {
        printf("Hello ...\n");
    }
}

int main()
{
    int x;
    printf("Enter  number :");
    scanf("%d", &x);
    SayHello(x);
    return 1;
}
