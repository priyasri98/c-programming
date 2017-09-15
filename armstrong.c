#include<stdio.h>
int main()
{
int a,t,rem,result=0;
printf("\n Enter the number");
scanf("%d",&a);
while(a!=0)
{
rem=a%10;
result=result+(rem*rem*rem);
a/=10;
}
if(t==result)
{
printf("%d is an armstrong number",a);
}
else
{
printf("%d ia not an armstrong number",a);
}
return o;
}
