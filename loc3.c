#include <stdio.h>
#include <string.h>
//Compiler version gcc  6.3.0

void main()
{
  char str[50];int w=0,i;
  
  printf("Enter a string :");
  scanf("%[^\n]%*c",&str);
  for(i=0;str[i]!='\0';i++)
 { if(str[i]==' ')
      w++;
  
  }
  w++;
  printf("No. of words in %s is %d",str,w);
  
}