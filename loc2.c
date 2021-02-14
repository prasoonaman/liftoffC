#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int a[10],i,s=0;
  printf("Enter 10 no.s :");
 for(i=0;i<=9;i++)
 {
   scanf("%d",&a[i]);
   if(a[i]%2==0)
   s+=a[i];
  }
  printf("Sum of all the even elements is= %d \n",s);
  s=0;
  for(i=0;i<10;i+=2)
  s+=a[i];
  printf("The sum of all the even position elements = %d ",s);
  
  
}