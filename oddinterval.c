#include<stdio.h>
int main()
{
int i,ft,lt;
printf("\nEnter the first interval");
scanf("%d",&ft);
printf("\n Enter the second interval");
scanf("%d",&lt);
printf("odd numbers between two intervals");
for(i=ft;i<=lt;i++)
{
if(i%2==1)
{
prinf("%d",i);
}
}
return 0;
}
