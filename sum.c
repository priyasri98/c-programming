#include<stdio.h>
int main()
{
int i,n,sum=0;
printf("\n Enter the number u want to sum");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+i;
}
printf("\n The sum value is %d",sum);
return 0;
}
