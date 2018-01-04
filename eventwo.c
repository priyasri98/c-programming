#include<stdio.h>
int main()
{
int l,h,i,f;
printf("\nEnter two numbers");
scanf("%d%d",&l,&h);
printf(" even number between given interval");
for(i=l;i<=h;++i)
{
f=i%2;
if(f==0)
printf("\n%d",i);
}
return 0;
}
