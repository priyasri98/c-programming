#include<stdio.h>
int main()
{
int n,c,s;
scanf("%d",&n);
c=n%10;
s=10-c;
n=n+s;
printf("%d",n);
return 0;
}
