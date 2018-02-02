#include<stdio.h>
int main()
{
int h1,h2,m1,m2;
printf("\n Enter the time in hour and minutes");
scanf("%d%d",&h1,&m1);
printf("\n Enter the time in hour and minutes");
scanf("%d%d",&h2,&m2);
if(h1>h2)
{
h1=h1-h2;
}
else
{
h1=h2-h1;
}
if(m1>m2)
{
m1=m1-m2;
}
else
{
m1=m2-m1;
}
printf("\nTime difference is %d:%d",h1,m1);
return 0;
}

