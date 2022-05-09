#include <stdio.h>

void myFunction()
{
  int choice;
  int result;
  int x,y,c = 0;
  printf("Please select an from below :\n");
  printf("1.Addition 2.Subtraction 3.Multiplication 4.Division 5.Quit\n");
  scanf("%d",&choice);
  printf("You have selected the option %d .\n",choice);  
  printf("x :");
  scanf("%d",&x);
  printf("y :");
  scanf("%d",&y);
   switch (choice)
  {
   case '1':result = x + y;
            printf("The final result is %d",result);
            break;
   case '2':result = x - y;
            printf("The final result is %d",result);
            break;
   case '3':result = x * y;
            printf("The final result is %d",result);
            break;
   case '4':result = x / y;
            printf("The final result is %d",result);
            break;
   default: ("INVALID CHOICE ! please try agian ");
            break;
  }
  int main();
  {
    myFunction();
    return 0;
  }