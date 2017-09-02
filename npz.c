#include<stdio.h>
int main()
{
int a;
printf("\n enter the number");
scanf("%d",&a);
  if(a>0)
  {
  printf("\nThe number is positive");
  }
   else
   {
     if(a<0)
     {
     printf("\nThe number is negative");
     }
      else
      {
      printf("\nThe number is zero");
      }
   }
return 0; 
}
