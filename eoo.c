#include<stdio.h>
int main()
{
int a;
printf("Enter the number ");
scanf("%d",&a);
if(a%2==0)
{
printf("\nThe number is even");
}
else
{
if(a==0)
{
printf("\nThe number is zero");
}
else{
printf("\nThe number is odd");
}
}
return 0;
}
