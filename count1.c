#include<stdio.h>
int main()
{
int c;
long long N;
printf("\nEnter the number");
scanf("%lld",&N);
while(N!=0)
{
N/=10;
++c;
}
printf("\ncount is %d",c);
return 0;
}
