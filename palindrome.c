#include<stdio.h>
int main()
{
int a,rem,t,rev=0;
printf("\n enter the number");
scanf("%d",&a);
t=a;
while(a!=0)
{
rem=a%10;
rev=rev*10+rem;
a/=10;
}
if(t==rev)
{
printf("\n %d is palindrome because its reversal is %d",a,rev);
}
else
{
printf("\n %d is not palindrome because its revesal is %d",a,rev);
}
return 0;
}
