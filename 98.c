#include<stdio.h>
int main()
{
int i,n,a[n];
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=n;i++)
{
if(a[i]!=i)
{
printf("%d",i);
break;
}
}
return 0;
}
