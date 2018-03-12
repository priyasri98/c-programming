#include<stdio.h>
int main()
{
int p,t,r,f;
printf("\nEnter amount,time and rate of interest");
scanf("%d%d%d",&p,&t,&r);
f=(p*t*r)/100;
printf("the floor value is %d",f);
return 0;
}
