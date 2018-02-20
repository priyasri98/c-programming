#include<stdio.h>
int main()
{
int n,c,f=0;
printf("\nEnter the number");
scanf("%d",&n);
c=n;
while(c!=1)
{
 if(c%2!=0)
 {
 f=1;
 break;
 }
 c=c/2;
}
if(f==0)
{
printf("\n Yes");
}
else
{
printf("\n No");
}
return 0;
}
