#include <stdio.h>
#include<string.h>

//Compiler version gcc  6.3.0

int main()
{
  char str1[50],str2[50],h;
  printf("Enter a string :");
  gets(str1);
  printf("Enter another string:");
  gets(str2);
  if(sizeof(str1)/sizeof(2)>= sizeof(str2)/sizeof(2))
 {h= strstr(str1,str2);
 if(h)
 printf("%s is a substring of %s",str2,str1);
 else
 printf("%s is not a substring of %s",str2,str1);
 
 }
 else
 {
 h= strstr(str2,str1);
 if(h)
 printf("%s is a substring of %s",str1,str2);
 else
 printf("%s is not a substring if %s",str1, str2);
 }
  return 0;
}