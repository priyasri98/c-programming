#include<stdio.h>
int main()
{
int a[10],i,m;
printf("\nEnter ten numbers:");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
m=a[0];
for(i=0;i<10;i++)
{
if(a[i]>m)
{
m=a[i];
}
}
printf("\n maximum number is %d",m);
return 0;
}
