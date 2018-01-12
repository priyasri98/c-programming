#include<stdio.h>
int main()
{
int t1,t2,rem,i,s,e,res=0,a=0;
printf("\nEnter the two intervals");
scanf("%d%d",&s,&e);
for(i=s+1;i<e;++i)
{
t2=i;
  t1=i;
  while(t1!=0)
  {
    t1/=10;
    ++a;
  }
while(t2!=0)
{
rem=t2%10;
res=res+pow(rem,a);
t2/=10;
}
if(res==i)
{
printf("\n%d",i);
}
  a=0;
  res=0;
}
return 0;
}
