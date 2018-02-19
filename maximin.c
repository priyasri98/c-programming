#include<stdio.h>
int main()
{
int i,j,n,t,m,s,a[100];
printf("\nEnter the number of elements");
scanf("%d",&n);
printf("\nEnter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=0;j<(n-i-1);j++)
{
if(a[j]>a[j+1])
{
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}
}
}
m=a[0];
s=a[n-1];
printf("%d %d",m,s);
return 0;
}
