#include <stdio.h>

//Compiler version gcc  6.3.0

void main()
{
  int dup,s=0,r,n;
  printf("Enter a no. :");
  scanf("%d",&n);
  dup=n;
  while(dup!=0)
  {
    r= dup%10;
    s+=r;
    dup/=10;
  }
  printf("The sum of digits of %d is %d",n,s);
}