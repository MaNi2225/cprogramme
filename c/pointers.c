#include <stdio.h>

int main() 
{
  int myAge = 43;  // Variable declaration
  int* ptr = &myAge;  // Pointer declaration

  // output : The memory address of my age .
  printf("%p\n", ptr);

  // output : The value of my age .
  printf("%d\n", *ptr);
  
  return 0;
}