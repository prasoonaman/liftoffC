#include <stdio.h>

//Compiler version gcc  6.3.0
struct stu
{
  int roll;
  char name[50];
};
void main()
{ struct stu s[5];int i,r;
  
  for(i = 0;i < 5;i++)
  {
    printf("Enter the name :\n");
    gets(s[i].name);
    printf("Enter the roll no. :\n");
    scanf("%d",&s[i].roll);
    fflush(stdin);   
  }
  printf("Enter roll no. of any student :");
  scanf("%d",&r);
  for(i=0;i<5;i++)
  {
    if(s[i].roll == r)
   {
     printf("Roll no. : %d\n",r);
     printf("Name :");
      puts(s[i].name);
      break;
   }
  }
  
}