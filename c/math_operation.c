#include <stdio.h>

int main(){
    char name[30];
    int choice;
   
    printf("Hello! What is your name :");
    scanf("%s",name);
    printf("Hey %s,it is nice to meet you\n",name);
    printf("Please enter your choice from below options \n");
    printf("1.ADD 2.SUBTRACTION 3.MULTIPLICATION 4.CANCEL\n");
    scanf("%d",&choice);
    printf("You entered %d option\n",choice);

    if(choice==1)
    {
        int x = 0;
        int y = 0;
        printf("Enter the value x :");
        scanf("%d",&x);
        printf("Enter the value y :");
        scanf("%d",&y);
        int c = x + y;
        printf("The final result is :%d",c);
        printf("\n");
    }
    else if(choice==2)
    {
        int x = 0;
        int y = 0;
        printf("Enter the value x :");
        scanf("%d",&x);
        printf("Enter the value y :");
        scanf("%d",&y);
        int c = x - y;
        printf("The final result :%d\n",c);
    }
    else if(choice==3)
    {
        int x = 0;
        int y = 0;
        printf("Enter the value x :");
        scanf("%d",&x);
        printf("Enter the value y :");
        scanf("%d",&y);
        int c = x * y;
        printf("The final result is %d\n",c);
    }
    else
    {
        printf("INVALID choice");
    }
    printf("BYE!\n");
    return 0;
}