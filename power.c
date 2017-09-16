#include<stdio.h>
int main()
{
int i,x,n,s=1;
printf("\n Enter the value for x and power");
scanf("%d%d",&x,&n);
for(i=1;i<=n;i++)
{
s=s*x;
}
printf("\n power of x is=%d",s);
return 0;
}
