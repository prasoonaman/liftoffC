#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int a[20][20],s=0,r,c,i,j,b[20][20],d[20][20];
  printf("Emter no of rows and no. of columns of 1st 2d array :");
  scanf("%d %d",&r,&c);
  printf("enter the elements if the 1st 2-d array:");
  
  for(i=0;i<r;i++)
  for(j=0;j<c;j++)
  scanf("%d",&a[i][j] );
  printf("enter the elements of the 2nd 2-d array :");
  for(i=0;i<r;i++)
  for(j=0;j<c;j++)
  scanf("%d",&b[i][j]);
 printf("the sum of both the arrays is: \n");
 for(i=0;i<r;i++)
 {for(j=0;j<c;j++)
 printf("%d ",*(*(a+i)+j) + *(*(b+i)+j));
printf("\n");
 }
 
 
  return 0;
}