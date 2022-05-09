#include <stdio.h>
int main()
{
    char name [50];
    int roll = 0;

    printf("Please enter your name to check your fee status :");
    scanf("%s",name);
    printf("%s Hey please enter your roll number :",name);
    scanf("%d",&roll);
    if(roll<=10)
    {
        printf("you succesfully paid your fee ");
    }
     else
    {
        printf("you didn't pay your fee please check now ! ");
    }

    return 0;

}