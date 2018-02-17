#include<stdio.h>
void swap(int *,int *);
int main()
{
int a,b; 
printf("\n Enter two nuumbers");
scanf("%d%d",&a,&b);
printf("\n Before swapping a=%d b=%d",a,b);
swap(&a,&b);
printf("\n After swapping a=%d b=%d",a,b);
return 0;
}
void swap(int *x,int *y)
{
*x=*x ^ *y;
*y=*x ^ *y;
*x=*x ^ *y;
}
