#include<stdio.h>
int main()
{
int n,i,p=0;
printf("\nEnter the number");
scanf("%d",&n);
for(i=2;i<n;i++)
{
if(n%i==0)
{
p=1;
break;
}
}
if(p==0)
{
printf("\nyes");
}
else
{
printf("\nNo");
}
return 0;
}
