#include<stdio.h>
int main()
{
int n,k,i;
int a[n];
printf("\nEnter two numbers");
scanf("%d %d",&n,&k);
printf("\nEnter %d elements",n); 
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<k;i++)
{
if(i==(k-1))
{
printf("%d",a[i]);
}
}
return 0;
}
