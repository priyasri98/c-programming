#include<stdio.h>
int main()
{
int a,t,rem,i,s,e,res=0;
printf("\nEnter the two intervals");
scanf("%d%d",&s,&e);
for(i=s;i<e;i++)
{
a=i;
while(a!=0)
{
rem=a%10;
res=res+(rem*rem*rem);
a/=10;
}
if(t==res)
{
printf("\n%d",res);
}
}
return 0;
}
