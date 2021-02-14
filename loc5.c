#include <stdio.h>

//Compiler version gcc  6.3.0

void main()
{
  int i,j,k,b=3,c;
  for(i=1;i<=3;i++)
  {if(i<3){
    for(k=1;k<=i;k++)
    printf(" ");
    printf("*");
    for(j=1;j<=b;j++)
    printf(" ");
    printf("*");
    b-=2;
    printf("\n");
    }
    else
    {for(k=1;k<=i;k++)
    printf(" ");
      printf("* \n");
      
    }
    
    }
  for(i=1,b=2,c=1;i<=2;i++,b--,c+=2)
    {
      for(j=1;j<=b;j++)
      printf(" ");
      printf("*");
      for(k=1;k<=c;k++)
      printf(" ");
      printf("*");
      printf("\n");
    }
}