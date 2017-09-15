#include<stdio.h>
int main()
{
long long a;
int cnt=0;
printf("\n Enter the value :");
scanf("%lld",&a);
while(a!=0)
{
n/=10;
++cnt;
}
printf("\nNumber of digits :%d",cnt);
return 0;
}
