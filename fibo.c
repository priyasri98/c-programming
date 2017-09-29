#include<stdio.h>
int main()
{
int i,t=0,t1=1,n,sum;
printf("\n Enter the number how much u want in the series");
scanf("%d",&n);
printf("\n The series are");
printf("\n%d\n%d",t,t1);
for(i=1;i<=n-2;i++)
{
sum=t+t1;
printf("\n%d",sum);
t=t1;
t1=sum;
}
return 0;
}




