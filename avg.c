#include<stdio.h>
int main()
{
int i,n,sum=0,a[n];
printf("\nEnter number of elements u want");
scanf("%d",&n);
printf("\nEnter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
printf("\n average is %d",sum/n);
return 0;
}
