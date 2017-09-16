#include<stdio.h>
int main()
{
int i,n,p=0;
printf("\n Enter the value");
scanf('%d",&n);
for(i=2;i<n;i++)
{
if((n%i)==0)
{
p=1;
break;
}
}
if(p==0)
{
printf("\n The given number is  prime number");
}
else
{
printf("\n The given number is not prime number");
}
return 0;
}
