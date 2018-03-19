#include<stdio.h>
int main()
{
int n,k,i,p=1;
scanf("%d%d",&n,&k);
for(i=1;i<=k;i++)
{
p=n*p;
}
printf("%d",p);
return 0;
}
