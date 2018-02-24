#include<stdio.h>
int main()
{
long a,b,t;
printf("\nEnter two numbers");
scanf("%ld%ld",&a,&b);
printf("\n %ld\t%ld",a,b);
t=a;
a=b;
b=t;
printf("\n %ld\t%ld",a,b);
return 0;
}
