#include<stdio.h>
int main()
{
int a,b,c,d;
printf("\nEnter the numbers");
scanf("%d%d",&a,&b);
printf("\nEnter the 1 for division and 2 for modulo");
scanf("%d",&c);
switch(c)
{
case 1:d=a/b;
printf("\n%d",d);
break;
case 2:d=a%b;
printf("\n%d",d);
break;
}
return 0;
}
