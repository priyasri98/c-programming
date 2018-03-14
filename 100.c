#include<stdio.h>
int main()
{
int n,rem,s=1;
scanf("%d",&n);
while(n!=0)
{
rem=n%10;
n=n/10;
s=rem*s;
}
printf("%d",s);
return 0;
}

