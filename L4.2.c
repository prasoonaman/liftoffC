#include <stdio.h>
#include<string.h>
#include<conio.h>
//Compiler version gcc  6.3.0

int main()
{
  int i;
  char a[30];
  printf("Enter a string:");
  gets(a);
  
  for(i=sizeof(a)/sizeof(2)-1;i>=0;i--)
  printf("%c",*(a+i));
  
  
  return 0;
}