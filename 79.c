#include<stdio.h>
int main()
{
int a,b,i,p=0;
scanf("%d%d",&a,&b);
a=a*b;
for(i=1;i<a;i++)
{
if((i*i)==a)
{
p=1;
break;
}
}
if(p==1)
{
printf("\nYes");
}
else
{
printf("\nNo");
}
return 0;
}
