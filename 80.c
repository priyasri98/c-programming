#include<stdio.h>
int main()
{
int n,rem;
printf("\nEnter the number");
scanf("%d",&n);
while(n!=0)
{
rem=n%10;
if(rem%2!=0)
{
printf("\t%d",rem);
}
n/=10;
}
return 0;
}

