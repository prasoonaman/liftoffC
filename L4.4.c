#include <stdio.h>

//Compiler version gcc  6.3.0
union Book
{
  char bname[100];
  char aname[50];
};
int main()
{ union Book b;
  printf("enter name of your fav book :\n");
  gets(b.bname);
  printf("Your Fav book is :\n");
  puts(b.bname);
  printf("Enter the authors name:\n");
  gets(b.aname);
  printf(" written by :");
  puts(b.aname);
  return 0;
}