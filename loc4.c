#include <stdio.h>

//Compiler version gcc  6.3.0

void main()
{
  int a[10],i,l,s;
  printf("Enter 10 no.s :");
  for(i=0;i<=9;i++)
  scanf("%d",&a[i]);
  l=a[0];s=a[0];
  for(i=1;i<=9;i++)
  {
    if(a[i]>=l)
    l=a[i];
    if(a[i]<=s)
    s=a[i];
  }
  printf("Largest no.= %d \n smallest no.= %d",l,s);
  
}