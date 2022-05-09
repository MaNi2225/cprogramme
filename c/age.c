#include <stdio.h>
#include<time.h>

int main(){
    char name[50];
    
    printf("Enter Your Name :");
    scanf("%s",name);
    printf("Hey %s!It is nice to meet you .\n",name);

    printf("Please answer the below questions .\n");
    
    int age = 0;
    int currentyear = 0;
    int birthyear = 0;
    // Get current year
    time_t theTime = time(NULL);
    struct tm *aTime = localtime(&theTime);
    currentyear = aTime->tm_year + 1900; // Year is # years since 1900
    /*
    // For now, asking user to enter the current year
    // TODO: Resolve current year from computer
    printf("Enter the Current year :");
    scanf("%d",&currentyear);
    */
    printf("Enter your Birth Year :");
    scanf("%d",&birthyear);
    age = currentyear - birthyear;
    printf("Your age is %d years",age);
    printf("\n");
    return 0;
}