#include<stdio.h>
void main()
{
  int x;

  printf("Enter your age:");
  scanf("%d",&x );

  if(x>=18)
    {
        printf("You can vote!\n\n");

    }


  else
  {
       printf("You are too young to vote!\n\n");
  }


}
