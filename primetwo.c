#include<stdio.h>
int main()
{
int i,s,e,p;
printf("\nEnter the two intervals");
scanf("%d%d",&s,&e);
s=s+1;
while(s<e)
{
p=0;
for(i=2;i<=s/2;++i)
{
if(s%i==0)
{
p=1;
break;
}
}
if(p==0)
printf("%d",s);
++s;
}
return 0;
}
