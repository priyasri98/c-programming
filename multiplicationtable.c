#include<stdio.h>
int main()
{
int i,n,r;
printf("\nEnter the value");
scanf("%d",&n);
printf("\nEnter the range");
scanf("%d",&r);
for(i=1;i<=r;i++)
{
printf("%d*%d=%d\n",n,i,n*i);
}
return 0;
}
