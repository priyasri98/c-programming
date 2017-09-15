#include<stdio.h>
int main()
{
int i,n,sum=0;
printf("\n Enter the number upto u need to sum");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+i;
}
printf("\n The sum is %d",sum);
return 0;
}
