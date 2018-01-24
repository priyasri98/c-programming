#include<stdio.h>
int main()
{
int a,b,t;
printf("\nEnter two numbers");
scanf("%d%d",&a,&b);
printf("\n Before swapping:\nfirst number:%d\nsecond number:%d",a,b);
t=a;
a=b;
b=t;
printf("\n After swapping:\nfirst number:%d\nsecond number:%d",a,b);
return 0;
}
