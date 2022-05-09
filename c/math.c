#include <stdio.h>
void myfunction(int option)
{
       int x=0,y=0;
       printf("Enter the value of x :");
       scanf("%d",&x);
       printf("Enter the value of y :");
       scanf("%d",&y);
  switch (option)
  {
      case 1:printf("%d + %d = %d\n" ,x,y,(x+y));
             break;
      case 2:printf("%d - %d = %d\n" ,x,y,(x-y));
             break;
      case 3:printf("%d * %d = %d\n" ,x,y,(x*y));
             break;
      case 4:printf("%d / %d = %d\n" ,x,y,(x/y));
             break;
      case 5:printf("You have quited from the operation.\n");
             break;
      default:printf("INVALID OPTION!Please check you  values.\n");
  }
}
int main()
{
       char name [50];
       int option;
       printf("Please Enter you name :");
       scanf("%s",name);
       printf("Hey! %s Please select an option from below.\n",name);

       int loopnow = 1;
       while(loopnow)
       {
       printf(" 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n 5.Quit\n");
       scanf("%d",&option);
       printf("Your selected option is %d\n",option);
       if (option == 5)
       {
              printf("THANK YOU... BYE");
              loopnow = 0;
       }
       else
       {
              myfunction(option);
       }
       }
  //myfunction();
  return 0;
}