#include<stdio.h>
int main()
{
int yr;
printf("\n Enter the year");
scanf("%d",&yr);
if(yr%4==0)
{
printf("\n This year is leap year");
}
else
{
printf("\n This year is non leap year");
}
return 0;
}
