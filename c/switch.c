#include <stdio.h>
int main()
{
    char grade;
    printf("Enter your grade:");
    scanf("%c",&grade);
    switch (grade)
    {
    case 'a':
    case 'A':
    case 'b':
    case 'B':
    case 'c':
    case 'C':
     printf("You are a good student .");
     break;
    
    default:
    printf("You are a average student .");
        break;
    }
}