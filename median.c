#include<stdio.h>
int main()
{
int n,a[n],i,s,j;
printf("\nEnter the number of elements u want");
scanf("%d",&n);
printf("\nEnter %d elements",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
s=a[i];
a[i]=a[j];
a[j]=s;
}
}
}
for(i=0;i<(n/2)+1;i++)
{
if(i==n/2)
{
printf("\n The median number is %d",a[i]);
}
}
return 0;
}
