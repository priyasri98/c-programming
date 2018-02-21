#include<stdio.h>
int main()
{
int n;
printf("\nEnter the number");
scanf("%d",&n);
if(n%2==0)
{
printf("%d",n);
}
else
{
printf("%d",n-1);
}
return 0;
}
